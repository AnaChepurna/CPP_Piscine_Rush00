# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/achepurn/CLionProjects/CPP_Piscine_Rush00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.cpp.dir/flags.make

CMakeFiles/main.cpp.dir/Controller.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Controller.cpp.o: ../Controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/Controller.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Controller.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Controller.cpp

CMakeFiles/main.cpp.dir/Controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Controller.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Controller.cpp > CMakeFiles/main.cpp.dir/Controller.cpp.i

CMakeFiles/main.cpp.dir/Controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Controller.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Controller.cpp -o CMakeFiles/main.cpp.dir/Controller.cpp.s

CMakeFiles/main.cpp.dir/Controller.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Controller.cpp.o.requires

CMakeFiles/main.cpp.dir/Controller.cpp.o.provides: CMakeFiles/main.cpp.dir/Controller.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Controller.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Controller.cpp.o.provides

CMakeFiles/main.cpp.dir/Controller.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Controller.cpp.o


CMakeFiles/main.cpp.dir/Viewer.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Viewer.cpp.o: ../Viewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.cpp.dir/Viewer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Viewer.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Viewer.cpp

CMakeFiles/main.cpp.dir/Viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Viewer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Viewer.cpp > CMakeFiles/main.cpp.dir/Viewer.cpp.i

CMakeFiles/main.cpp.dir/Viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Viewer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Viewer.cpp -o CMakeFiles/main.cpp.dir/Viewer.cpp.s

CMakeFiles/main.cpp.dir/Viewer.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Viewer.cpp.o.requires

CMakeFiles/main.cpp.dir/Viewer.cpp.o.provides: CMakeFiles/main.cpp.dir/Viewer.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Viewer.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Viewer.cpp.o.provides

CMakeFiles/main.cpp.dir/Viewer.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Viewer.cpp.o


CMakeFiles/main.cpp.dir/Model.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Model.cpp.o: ../Model.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.cpp.dir/Model.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Model.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Model.cpp

CMakeFiles/main.cpp.dir/Model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Model.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Model.cpp > CMakeFiles/main.cpp.dir/Model.cpp.i

CMakeFiles/main.cpp.dir/Model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Model.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Model.cpp -o CMakeFiles/main.cpp.dir/Model.cpp.s

CMakeFiles/main.cpp.dir/Model.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Model.cpp.o.requires

CMakeFiles/main.cpp.dir/Model.cpp.o.provides: CMakeFiles/main.cpp.dir/Model.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Model.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Model.cpp.o.provides

CMakeFiles/main.cpp.dir/Model.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Model.cpp.o


CMakeFiles/main.cpp.dir/main.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.cpp.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/main.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/main.cpp

CMakeFiles/main.cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/main.cpp > CMakeFiles/main.cpp.dir/main.cpp.i

CMakeFiles/main.cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/main.cpp -o CMakeFiles/main.cpp.dir/main.cpp.s

CMakeFiles/main.cpp.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/main.cpp.o.requires

CMakeFiles/main.cpp.dir/main.cpp.o.provides: CMakeFiles/main.cpp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/main.cpp.o.provides

CMakeFiles/main.cpp.dir/main.cpp.o.provides.build: CMakeFiles/main.cpp.dir/main.cpp.o


CMakeFiles/main.cpp.dir/Object.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Object.cpp.o: ../Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.cpp.dir/Object.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Object.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Object.cpp

CMakeFiles/main.cpp.dir/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Object.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Object.cpp > CMakeFiles/main.cpp.dir/Object.cpp.i

CMakeFiles/main.cpp.dir/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Object.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Object.cpp -o CMakeFiles/main.cpp.dir/Object.cpp.s

CMakeFiles/main.cpp.dir/Object.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Object.cpp.o.requires

CMakeFiles/main.cpp.dir/Object.cpp.o.provides: CMakeFiles/main.cpp.dir/Object.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Object.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Object.cpp.o.provides

CMakeFiles/main.cpp.dir/Object.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Object.cpp.o


CMakeFiles/main.cpp.dir/Character.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/Character.cpp.o: ../Character.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.cpp.dir/Character.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/Character.cpp.o -c /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Character.cpp

CMakeFiles/main.cpp.dir/Character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/Character.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Character.cpp > CMakeFiles/main.cpp.dir/Character.cpp.i

CMakeFiles/main.cpp.dir/Character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/Character.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/Character.cpp -o CMakeFiles/main.cpp.dir/Character.cpp.s

CMakeFiles/main.cpp.dir/Character.cpp.o.requires:

.PHONY : CMakeFiles/main.cpp.dir/Character.cpp.o.requires

CMakeFiles/main.cpp.dir/Character.cpp.o.provides: CMakeFiles/main.cpp.dir/Character.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.cpp.dir/build.make CMakeFiles/main.cpp.dir/Character.cpp.o.provides.build
.PHONY : CMakeFiles/main.cpp.dir/Character.cpp.o.provides

CMakeFiles/main.cpp.dir/Character.cpp.o.provides.build: CMakeFiles/main.cpp.dir/Character.cpp.o


# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/Controller.cpp.o" \
"CMakeFiles/main.cpp.dir/Viewer.cpp.o" \
"CMakeFiles/main.cpp.dir/Model.cpp.o" \
"CMakeFiles/main.cpp.dir/main.cpp.o" \
"CMakeFiles/main.cpp.dir/Object.cpp.o" \
"CMakeFiles/main.cpp.dir/Character.cpp.o"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

main.cpp: CMakeFiles/main.cpp.dir/Controller.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Viewer.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Model.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/main.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Object.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/Character.cpp.o
main.cpp: CMakeFiles/main.cpp.dir/build.make
main.cpp: CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable main.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.cpp.dir/build: main.cpp

.PHONY : CMakeFiles/main.cpp.dir/build

CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Controller.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Viewer.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Model.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/main.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Object.cpp.o.requires
CMakeFiles/main.cpp.dir/requires: CMakeFiles/main.cpp.dir/Character.cpp.o.requires

.PHONY : CMakeFiles/main.cpp.dir/requires

CMakeFiles/main.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.cpp.dir/clean

CMakeFiles/main.cpp.dir/depend:
	cd /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/achepurn/CLionProjects/CPP_Piscine_Rush00 /Users/achepurn/CLionProjects/CPP_Piscine_Rush00 /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug /Users/achepurn/CLionProjects/CPP_Piscine_Rush00/cmake-build-debug/CMakeFiles/main.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.cpp.dir/depend

