# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\shant\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\shant\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.7660.37\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Trees.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Trees.dir/flags.make

CMakeFiles/Trees.dir/main.cpp.obj: CMakeFiles/Trees.dir/flags.make
CMakeFiles/Trees.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Trees.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Trees.dir\main.cpp.obj -c "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\main.cpp"

CMakeFiles/Trees.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Trees.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\main.cpp" > CMakeFiles\Trees.dir\main.cpp.i

CMakeFiles/Trees.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Trees.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\main.cpp" -o CMakeFiles\Trees.dir\main.cpp.s

# Object files for target Trees
Trees_OBJECTS = \
"CMakeFiles/Trees.dir/main.cpp.obj"

# External object files for target Trees
Trees_EXTERNAL_OBJECTS =

Trees.exe: CMakeFiles/Trees.dir/main.cpp.obj
Trees.exe: CMakeFiles/Trees.dir/build.make
Trees.exe: CMakeFiles/Trees.dir/linklibs.rsp
Trees.exe: CMakeFiles/Trees.dir/objects1.rsp
Trees.exe: CMakeFiles/Trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Trees.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Trees.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Trees.dir/build: Trees.exe

.PHONY : CMakeFiles/Trees.dir/build

CMakeFiles/Trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Trees.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Trees.dir/clean

CMakeFiles/Trees.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees" "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees" "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug" "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug" "D:\Documents\Coding_and_Projects\Cpp_Projects\Competitive programming\Trees\cmake-build-debug\CMakeFiles\Trees.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Trees.dir/depend

