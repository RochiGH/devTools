#include <stdio.h>
#include <sqlite3.h> 

//int createSqliteDatabase(int argc, char* argv[]) {
int createSqliteDatabase() {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open("test.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
   return 0; 
}

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

// int createSqliteDatabaseTable(int argc, char* argv[]) {
int createSqliteDatabaseTable() {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char *sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */

   sql = "CREATE TABLE GNRTK("  \
      "ID INT PRIMARY KEY     NOT NULL," \
      "NODEID         TEXT    NOT NULL," \
      "LAT            FLOAT   NOT NULL," \
      "LON            FLOAT   NOT NULL);";

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

int insertSqliteDatabaseTable() {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char *sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO GNRTK (ID,NODEID,LAT,LON) "  \
         "VALUES (1, 'LO', 32.34, 45.79); " \
         "INSERT INTO GNRTK (ID,NODEID,LAT,LON) "  \
         "VALUES (2, 'LO', 33.34, 46.79); " \
         "INSERT INTO GNRTK (ID,NODEID,LAT,LON) "  \
         "VALUES (3, 'LO', 34.34, 47.79); " \
         "INSERT INTO GNRTK (ID,NODEID,LAT,LON) "  \
         "VALUES (4, 'LO', 35.34, 48.79); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
   
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
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

   /* Open database */
   rc = sqlite3_open("test.db", &db);
   
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