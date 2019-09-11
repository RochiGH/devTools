# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.fltk.Debug:
/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/Debug/fltk:
	/bin/rm -f /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/Debug/fltk


PostBuild.fltk.Release:
/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/Release/fltk:
	/bin/rm -f /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/Release/fltk


PostBuild.fltk.MinSizeRel:
/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/MinSizeRel/fltk:
	/bin/rm -f /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/MinSizeRel/fltk


PostBuild.fltk.RelWithDebInfo:
/Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/RelWithDebInfo/fltk:
	/bin/rm -f /Users/roccoferrante/Dropbox/Coding/C++/devTools/fltk/build/Xcode/RelWithDebInfo/fltk




# For each target create a dummy ruleso the target does not have to exist
