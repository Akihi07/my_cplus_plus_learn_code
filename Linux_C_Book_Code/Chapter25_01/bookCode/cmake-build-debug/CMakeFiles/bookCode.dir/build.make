# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bookCode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bookCode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bookCode.dir/flags.make

CMakeFiles/bookCode.dir/main.c.obj: CMakeFiles/bookCode.dir/flags.make
CMakeFiles/bookCode.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bookCode.dir/main.c.obj"
	D:\11071\ONEDRI~1.CN\Root\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\bookCode.dir\main.c.obj -c D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\main.c

CMakeFiles/bookCode.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bookCode.dir/main.c.i"
	D:\11071\ONEDRI~1.CN\Root\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\main.c > CMakeFiles\bookCode.dir\main.c.i

CMakeFiles/bookCode.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bookCode.dir/main.c.s"
	D:\11071\ONEDRI~1.CN\Root\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\main.c -o CMakeFiles\bookCode.dir\main.c.s

# Object files for target bookCode
bookCode_OBJECTS = \
"CMakeFiles/bookCode.dir/main.c.obj"

# External object files for target bookCode
bookCode_EXTERNAL_OBJECTS =

bookCode.exe: CMakeFiles/bookCode.dir/main.c.obj
bookCode.exe: CMakeFiles/bookCode.dir/build.make
bookCode.exe: CMakeFiles/bookCode.dir/linklibs.rsp
bookCode.exe: CMakeFiles/bookCode.dir/objects1.rsp
bookCode.exe: CMakeFiles/bookCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bookCode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bookCode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bookCode.dir/build: bookCode.exe

.PHONY : CMakeFiles/bookCode.dir/build

CMakeFiles/bookCode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bookCode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bookCode.dir/clean

CMakeFiles/bookCode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug D:\11071\OneDrive\CPlusWorkSpace\Linux_C_Book_Code\Chapter25_01\bookCode\cmake-build-debug\CMakeFiles\bookCode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bookCode.dir/depend

