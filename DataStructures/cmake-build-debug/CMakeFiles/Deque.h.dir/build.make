# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/229/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/229/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lukas/CLionProjects/DataStructures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lukas/CLionProjects/DataStructures/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Deque.h.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Deque.h.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Deque.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Deque.h.dir/flags.make

CMakeFiles/Deque.h.dir/Deque.cpp.o: CMakeFiles/Deque.h.dir/flags.make
CMakeFiles/Deque.h.dir/Deque.cpp.o: /home/lukas/CLionProjects/DataStructures/Deque.cpp
CMakeFiles/Deque.h.dir/Deque.cpp.o: CMakeFiles/Deque.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lukas/CLionProjects/DataStructures/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Deque.h.dir/Deque.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Deque.h.dir/Deque.cpp.o -MF CMakeFiles/Deque.h.dir/Deque.cpp.o.d -o CMakeFiles/Deque.h.dir/Deque.cpp.o -c /home/lukas/CLionProjects/DataStructures/Deque.cpp

CMakeFiles/Deque.h.dir/Deque.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Deque.h.dir/Deque.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lukas/CLionProjects/DataStructures/Deque.cpp > CMakeFiles/Deque.h.dir/Deque.cpp.i

CMakeFiles/Deque.h.dir/Deque.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Deque.h.dir/Deque.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lukas/CLionProjects/DataStructures/Deque.cpp -o CMakeFiles/Deque.h.dir/Deque.cpp.s

CMakeFiles/Deque.h.dir/constructors.cpp.o: CMakeFiles/Deque.h.dir/flags.make
CMakeFiles/Deque.h.dir/constructors.cpp.o: /home/lukas/CLionProjects/DataStructures/constructors.cpp
CMakeFiles/Deque.h.dir/constructors.cpp.o: CMakeFiles/Deque.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lukas/CLionProjects/DataStructures/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Deque.h.dir/constructors.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Deque.h.dir/constructors.cpp.o -MF CMakeFiles/Deque.h.dir/constructors.cpp.o.d -o CMakeFiles/Deque.h.dir/constructors.cpp.o -c /home/lukas/CLionProjects/DataStructures/constructors.cpp

CMakeFiles/Deque.h.dir/constructors.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Deque.h.dir/constructors.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lukas/CLionProjects/DataStructures/constructors.cpp > CMakeFiles/Deque.h.dir/constructors.cpp.i

CMakeFiles/Deque.h.dir/constructors.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Deque.h.dir/constructors.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lukas/CLionProjects/DataStructures/constructors.cpp -o CMakeFiles/Deque.h.dir/constructors.cpp.s

# Object files for target Deque.h
Deque_h_OBJECTS = \
"CMakeFiles/Deque.h.dir/Deque.cpp.o" \
"CMakeFiles/Deque.h.dir/constructors.cpp.o"

# External object files for target Deque.h
Deque_h_EXTERNAL_OBJECTS =

Deque.h: CMakeFiles/Deque.h.dir/Deque.cpp.o
Deque.h: CMakeFiles/Deque.h.dir/constructors.cpp.o
Deque.h: CMakeFiles/Deque.h.dir/build.make
Deque.h: CMakeFiles/Deque.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lukas/CLionProjects/DataStructures/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Deque.h"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Deque.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Deque.h.dir/build: Deque.h
.PHONY : CMakeFiles/Deque.h.dir/build

CMakeFiles/Deque.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Deque.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Deque.h.dir/clean

CMakeFiles/Deque.h.dir/depend:
	cd /home/lukas/CLionProjects/DataStructures/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lukas/CLionProjects/DataStructures /home/lukas/CLionProjects/DataStructures /home/lukas/CLionProjects/DataStructures/cmake-build-debug /home/lukas/CLionProjects/DataStructures/cmake-build-debug /home/lukas/CLionProjects/DataStructures/cmake-build-debug/CMakeFiles/Deque.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Deque.h.dir/depend
