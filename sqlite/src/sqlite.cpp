#include <stdio.h>
#include <sqlite3.h> 

#include "../include/GnNode.h"

using namespace std;

extern vector<GnNode> gnRtk; 

#define BUFFER_SIZE 512
#define QUERY_SIZE  512

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int createSqliteDatabase(const char* dbFilePath, const char* dbFileName) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char sqliteDbName[BUFFER_SIZE];
   sprintf(sqliteDbName, "%s%s", dbFilePath, dbFileName);

   /* Open database */
   rc = sqlite3_open(sqliteDbName, &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
   return 0; 
}

int createSqliteDatabaseTable(const char* dbFilePath, const char* dbFileName, const char* dbTableName)  {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char sql[QUERY_SIZE];
   char sqliteDbName[BUFFER_SIZE];
   sprintf(sqliteDbName, "%s%s", dbFilePath, dbFileName);

   /* Open database */
   rc = sqlite3_open(sqliteDbName, &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   sprintf(sql, "CREATE TABLE %s ("  \
      /*"ID INT PRIMARY KEY     NOT NULL," \*/
      "NODEID         TEXT    NOT NULL," \
      "LAT            FLOAT   NOT NULL," \
      "LON            FLOAT   NOT NULL);",
      dbTableName);

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }
   sqlite3_close(db);
   return 0;
}

int insertSqliteDatabaseTable(const char* dbFilePath, const char* dbFileName, const char* dbTableName, vector<GnNode> GnRtkIn) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char *sql;
   char sqlIn[QUERY_SIZE];
   char sqliteDbName[BUFFER_SIZE];
   sprintf(sqliteDbName, "%s%s", dbFilePath, dbFileName);

   /* Open database */
   rc = sqlite3_open(sqliteDbName, &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   for (int i = 0; i < GnRtkIn.size(); i++)
   {
      /* Create SQL statement */
      sprintf(sqlIn,"INSERT INTO GNRTK (NODEID,LAT,LON) "  \
      "VALUES ('%s', %.2f, %.2f);" ,gnRtk.at(i).UID ,gnRtk.at(i).lon , gnRtk.at(i).lat);

      /* Execute SQL statement */
      rc = sqlite3_exec(db, sqlIn, callback, 0, &zErrMsg);
      
      if( rc != SQLITE_OK ){
         fprintf(stderr, "SQL error: %s\n", zErrMsg);
         sqlite3_free(zErrMsg);
      } else {
         fprintf(stdout, "Records created successfully\n");
      }
   }

   sqlite3_close(db);
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char *sql;
   const char* data = "Callback function called";
   
   GnNodeSmashRtkCreator();
   createSqliteDatabase       ("./", "rtk_test.db");
   createSqliteDatabaseTable  ("./", "rtk_test.db", "GNRTK");
   insertSqliteDatabaseTable  ("./", "rtk_test.db", "GNRTK", gnRtk);

   /* Open database */
   rc = sqlite3_open("rtk_test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "SELECT * from GNRTK";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
   
   if( rc != SQLITE_OK ) {
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Operation done successfully\n");
   }
   sqlite3_close(db);
   return 0;
}