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
CMAKE_COMMAND = C:\Users\mansf\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\mansf\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\202.6948.80\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mansf\CLionProjects\Plot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mansf\CLionProjects\Plot\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Plot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Plot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Plot.dir/flags.make

CMakeFiles/Plot.dir/interp1.c.obj: CMakeFiles/Plot.dir/flags.make
CMakeFiles/Plot.dir/interp1.c.obj: ../interp1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Plot.dir/interp1.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Plot.dir\interp1.c.obj   -c C:\Users\mansf\CLionProjects\Plot\interp1.c

CMakeFiles/Plot.dir/interp1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/interp1.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mansf\CLionProjects\Plot\interp1.c > CMakeFiles\Plot.dir\interp1.c.i

CMakeFiles/Plot.dir/interp1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/interp1.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mansf\CLionProjects\Plot\interp1.c -o CMakeFiles\Plot.dir\interp1.c.s

CMakeFiles/Plot.dir/plot.c.obj: CMakeFiles/Plot.dir/flags.make
CMakeFiles/Plot.dir/plot.c.obj: ../plot.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Plot.dir/plot.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Plot.dir\plot.c.obj   -c C:\Users\mansf\CLionProjects\Plot\plot.c

CMakeFiles/Plot.dir/plot.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/plot.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mansf\CLionProjects\Plot\plot.c > CMakeFiles\Plot.dir\plot.c.i

CMakeFiles/Plot.dir/plot.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/plot.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mansf\CLionProjects\Plot\plot.c -o CMakeFiles\Plot.dir\plot.c.s

CMakeFiles/Plot.dir/tga.c.obj: CMakeFiles/Plot.dir/flags.make
CMakeFiles/Plot.dir/tga.c.obj: ../tga.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Plot.dir/tga.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Plot.dir\tga.c.obj   -c C:\Users\mansf\CLionProjects\Plot\tga.c

CMakeFiles/Plot.dir/tga.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/tga.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mansf\CLionProjects\Plot\tga.c > CMakeFiles\Plot.dir\tga.c.i

CMakeFiles/Plot.dir/tga.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/tga.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mansf\CLionProjects\Plot\tga.c -o CMakeFiles\Plot.dir\tga.c.s

CMakeFiles/Plot.dir/dump.c.obj: CMakeFiles/Plot.dir/flags.make
CMakeFiles/Plot.dir/dump.c.obj: ../dump.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Plot.dir/dump.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Plot.dir\dump.c.obj   -c C:\Users\mansf\CLionProjects\Plot\dump.c

CMakeFiles/Plot.dir/dump.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/dump.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mansf\CLionProjects\Plot\dump.c > CMakeFiles\Plot.dir\dump.c.i

CMakeFiles/Plot.dir/dump.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/dump.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mansf\CLionProjects\Plot\dump.c -o CMakeFiles\Plot.dir\dump.c.s

CMakeFiles/Plot.dir/lengthCheck.c.obj: CMakeFiles/Plot.dir/flags.make
CMakeFiles/Plot.dir/lengthCheck.c.obj: ../lengthCheck.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Plot.dir/lengthCheck.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Plot.dir\lengthCheck.c.obj   -c C:\Users\mansf\CLionProjects\Plot\lengthCheck.c

CMakeFiles/Plot.dir/lengthCheck.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Plot.dir/lengthCheck.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\mansf\CLionProjects\Plot\lengthCheck.c > CMakeFiles\Plot.dir\lengthCheck.c.i

CMakeFiles/Plot.dir/lengthCheck.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Plot.dir/lengthCheck.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\mansf\CLionProjects\Plot\lengthCheck.c -o CMakeFiles\Plot.dir\lengthCheck.c.s

# Object files for target Plot
Plot_OBJECTS = \
"CMakeFiles/Plot.dir/interp1.c.obj" \
"CMakeFiles/Plot.dir/plot.c.obj" \
"CMakeFiles/Plot.dir/tga.c.obj" \
"CMakeFiles/Plot.dir/dump.c.obj" \
"CMakeFiles/Plot.dir/lengthCheck.c.obj"

# External object files for target Plot
Plot_EXTERNAL_OBJECTS =

Plot.exe: CMakeFiles/Plot.dir/interp1.c.obj
Plot.exe: CMakeFiles/Plot.dir/plot.c.obj
Plot.exe: CMakeFiles/Plot.dir/tga.c.obj
Plot.exe: CMakeFiles/Plot.dir/dump.c.obj
Plot.exe: CMakeFiles/Plot.dir/lengthCheck.c.obj
Plot.exe: CMakeFiles/Plot.dir/build.make
Plot.exe: CMakeFiles/Plot.dir/linklibs.rsp
Plot.exe: CMakeFiles/Plot.dir/objects1.rsp
Plot.exe: CMakeFiles/Plot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Plot.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Plot.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Plot.dir/build: Plot.exe

.PHONY : CMakeFiles/Plot.dir/build

CMakeFiles/Plot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Plot.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Plot.dir/clean

CMakeFiles/Plot.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mansf\CLionProjects\Plot C:\Users\mansf\CLionProjects\Plot C:\Users\mansf\CLionProjects\Plot\cmake-build-debug C:\Users\mansf\CLionProjects\Plot\cmake-build-debug C:\Users\mansf\CLionProjects\Plot\cmake-build-debug\CMakeFiles\Plot.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Plot.dir/depend

