# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Documents/c++/render_engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/c++/render_engine

# Include any dependencies generated for this target.
include CMakeFiles/render_engine.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/render_engine.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/render_engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/render_engine.dir/flags.make

CMakeFiles/render_engine.dir/src/main.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/render_engine.dir/src/main.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/render_engine.dir/src/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/main.cpp.o -MF CMakeFiles/render_engine.dir/src/main.cpp.o.d -o CMakeFiles/render_engine.dir/src/main.cpp.o -c /Users/mac/Documents/c++/render_engine/src/main.cpp

CMakeFiles/render_engine.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/main.cpp > CMakeFiles/render_engine.dir/src/main.cpp.i

CMakeFiles/render_engine.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/main.cpp -o CMakeFiles/render_engine.dir/src/main.cpp.s

CMakeFiles/render_engine.dir/src/vector2.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/vector2.cpp.o: src/vector2.cpp
CMakeFiles/render_engine.dir/src/vector2.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/render_engine.dir/src/vector2.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/vector2.cpp.o -MF CMakeFiles/render_engine.dir/src/vector2.cpp.o.d -o CMakeFiles/render_engine.dir/src/vector2.cpp.o -c /Users/mac/Documents/c++/render_engine/src/vector2.cpp

CMakeFiles/render_engine.dir/src/vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/vector2.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/vector2.cpp > CMakeFiles/render_engine.dir/src/vector2.cpp.i

CMakeFiles/render_engine.dir/src/vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/vector2.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/vector2.cpp -o CMakeFiles/render_engine.dir/src/vector2.cpp.s

CMakeFiles/render_engine.dir/src/vector3.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/vector3.cpp.o: src/vector3.cpp
CMakeFiles/render_engine.dir/src/vector3.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/render_engine.dir/src/vector3.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/vector3.cpp.o -MF CMakeFiles/render_engine.dir/src/vector3.cpp.o.d -o CMakeFiles/render_engine.dir/src/vector3.cpp.o -c /Users/mac/Documents/c++/render_engine/src/vector3.cpp

CMakeFiles/render_engine.dir/src/vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/vector3.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/vector3.cpp > CMakeFiles/render_engine.dir/src/vector3.cpp.i

CMakeFiles/render_engine.dir/src/vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/vector3.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/vector3.cpp -o CMakeFiles/render_engine.dir/src/vector3.cpp.s

CMakeFiles/render_engine.dir/src/vector4.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/vector4.cpp.o: src/vector4.cpp
CMakeFiles/render_engine.dir/src/vector4.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/render_engine.dir/src/vector4.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/vector4.cpp.o -MF CMakeFiles/render_engine.dir/src/vector4.cpp.o.d -o CMakeFiles/render_engine.dir/src/vector4.cpp.o -c /Users/mac/Documents/c++/render_engine/src/vector4.cpp

CMakeFiles/render_engine.dir/src/vector4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/vector4.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/vector4.cpp > CMakeFiles/render_engine.dir/src/vector4.cpp.i

CMakeFiles/render_engine.dir/src/vector4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/vector4.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/vector4.cpp -o CMakeFiles/render_engine.dir/src/vector4.cpp.s

CMakeFiles/render_engine.dir/src/matrix22.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/matrix22.cpp.o: src/matrix22.cpp
CMakeFiles/render_engine.dir/src/matrix22.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/render_engine.dir/src/matrix22.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/matrix22.cpp.o -MF CMakeFiles/render_engine.dir/src/matrix22.cpp.o.d -o CMakeFiles/render_engine.dir/src/matrix22.cpp.o -c /Users/mac/Documents/c++/render_engine/src/matrix22.cpp

CMakeFiles/render_engine.dir/src/matrix22.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/matrix22.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/matrix22.cpp > CMakeFiles/render_engine.dir/src/matrix22.cpp.i

CMakeFiles/render_engine.dir/src/matrix22.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/matrix22.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/matrix22.cpp -o CMakeFiles/render_engine.dir/src/matrix22.cpp.s

CMakeFiles/render_engine.dir/src/matrix33.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/matrix33.cpp.o: src/matrix33.cpp
CMakeFiles/render_engine.dir/src/matrix33.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/render_engine.dir/src/matrix33.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/matrix33.cpp.o -MF CMakeFiles/render_engine.dir/src/matrix33.cpp.o.d -o CMakeFiles/render_engine.dir/src/matrix33.cpp.o -c /Users/mac/Documents/c++/render_engine/src/matrix33.cpp

CMakeFiles/render_engine.dir/src/matrix33.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/matrix33.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/matrix33.cpp > CMakeFiles/render_engine.dir/src/matrix33.cpp.i

CMakeFiles/render_engine.dir/src/matrix33.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/matrix33.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/matrix33.cpp -o CMakeFiles/render_engine.dir/src/matrix33.cpp.s

CMakeFiles/render_engine.dir/src/matrix44.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/matrix44.cpp.o: src/matrix44.cpp
CMakeFiles/render_engine.dir/src/matrix44.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/render_engine.dir/src/matrix44.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/matrix44.cpp.o -MF CMakeFiles/render_engine.dir/src/matrix44.cpp.o.d -o CMakeFiles/render_engine.dir/src/matrix44.cpp.o -c /Users/mac/Documents/c++/render_engine/src/matrix44.cpp

CMakeFiles/render_engine.dir/src/matrix44.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/matrix44.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/matrix44.cpp > CMakeFiles/render_engine.dir/src/matrix44.cpp.i

CMakeFiles/render_engine.dir/src/matrix44.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/matrix44.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/matrix44.cpp -o CMakeFiles/render_engine.dir/src/matrix44.cpp.s

CMakeFiles/render_engine.dir/src/quaternion.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/quaternion.cpp.o: src/quaternion.cpp
CMakeFiles/render_engine.dir/src/quaternion.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/render_engine.dir/src/quaternion.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/quaternion.cpp.o -MF CMakeFiles/render_engine.dir/src/quaternion.cpp.o.d -o CMakeFiles/render_engine.dir/src/quaternion.cpp.o -c /Users/mac/Documents/c++/render_engine/src/quaternion.cpp

CMakeFiles/render_engine.dir/src/quaternion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/quaternion.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/quaternion.cpp > CMakeFiles/render_engine.dir/src/quaternion.cpp.i

CMakeFiles/render_engine.dir/src/quaternion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/quaternion.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/quaternion.cpp -o CMakeFiles/render_engine.dir/src/quaternion.cpp.s

CMakeFiles/render_engine.dir/src/genmath.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/genmath.cpp.o: src/genmath.cpp
CMakeFiles/render_engine.dir/src/genmath.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/render_engine.dir/src/genmath.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/genmath.cpp.o -MF CMakeFiles/render_engine.dir/src/genmath.cpp.o.d -o CMakeFiles/render_engine.dir/src/genmath.cpp.o -c /Users/mac/Documents/c++/render_engine/src/genmath.cpp

CMakeFiles/render_engine.dir/src/genmath.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/genmath.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/genmath.cpp > CMakeFiles/render_engine.dir/src/genmath.cpp.i

CMakeFiles/render_engine.dir/src/genmath.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/genmath.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/genmath.cpp -o CMakeFiles/render_engine.dir/src/genmath.cpp.s

CMakeFiles/render_engine.dir/src/rasterizer.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/rasterizer.cpp.o: src/rasterizer.cpp
CMakeFiles/render_engine.dir/src/rasterizer.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/render_engine.dir/src/rasterizer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/rasterizer.cpp.o -MF CMakeFiles/render_engine.dir/src/rasterizer.cpp.o.d -o CMakeFiles/render_engine.dir/src/rasterizer.cpp.o -c /Users/mac/Documents/c++/render_engine/src/rasterizer.cpp

CMakeFiles/render_engine.dir/src/rasterizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/rasterizer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/rasterizer.cpp > CMakeFiles/render_engine.dir/src/rasterizer.cpp.i

CMakeFiles/render_engine.dir/src/rasterizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/rasterizer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/rasterizer.cpp -o CMakeFiles/render_engine.dir/src/rasterizer.cpp.s

CMakeFiles/render_engine.dir/src/framebuffer.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/framebuffer.cpp.o: src/framebuffer.cpp
CMakeFiles/render_engine.dir/src/framebuffer.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/render_engine.dir/src/framebuffer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/framebuffer.cpp.o -MF CMakeFiles/render_engine.dir/src/framebuffer.cpp.o.d -o CMakeFiles/render_engine.dir/src/framebuffer.cpp.o -c /Users/mac/Documents/c++/render_engine/src/framebuffer.cpp

CMakeFiles/render_engine.dir/src/framebuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/framebuffer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/framebuffer.cpp > CMakeFiles/render_engine.dir/src/framebuffer.cpp.i

CMakeFiles/render_engine.dir/src/framebuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/framebuffer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/framebuffer.cpp -o CMakeFiles/render_engine.dir/src/framebuffer.cpp.s

CMakeFiles/render_engine.dir/src/camera.cpp.o: CMakeFiles/render_engine.dir/flags.make
CMakeFiles/render_engine.dir/src/camera.cpp.o: src/camera.cpp
CMakeFiles/render_engine.dir/src/camera.cpp.o: CMakeFiles/render_engine.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/render_engine.dir/src/camera.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/render_engine.dir/src/camera.cpp.o -MF CMakeFiles/render_engine.dir/src/camera.cpp.o.d -o CMakeFiles/render_engine.dir/src/camera.cpp.o -c /Users/mac/Documents/c++/render_engine/src/camera.cpp

CMakeFiles/render_engine.dir/src/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/render_engine.dir/src/camera.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/c++/render_engine/src/camera.cpp > CMakeFiles/render_engine.dir/src/camera.cpp.i

CMakeFiles/render_engine.dir/src/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/render_engine.dir/src/camera.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/c++/render_engine/src/camera.cpp -o CMakeFiles/render_engine.dir/src/camera.cpp.s

# Object files for target render_engine
render_engine_OBJECTS = \
"CMakeFiles/render_engine.dir/src/main.cpp.o" \
"CMakeFiles/render_engine.dir/src/vector2.cpp.o" \
"CMakeFiles/render_engine.dir/src/vector3.cpp.o" \
"CMakeFiles/render_engine.dir/src/vector4.cpp.o" \
"CMakeFiles/render_engine.dir/src/matrix22.cpp.o" \
"CMakeFiles/render_engine.dir/src/matrix33.cpp.o" \
"CMakeFiles/render_engine.dir/src/matrix44.cpp.o" \
"CMakeFiles/render_engine.dir/src/quaternion.cpp.o" \
"CMakeFiles/render_engine.dir/src/genmath.cpp.o" \
"CMakeFiles/render_engine.dir/src/rasterizer.cpp.o" \
"CMakeFiles/render_engine.dir/src/framebuffer.cpp.o" \
"CMakeFiles/render_engine.dir/src/camera.cpp.o"

# External object files for target render_engine
render_engine_EXTERNAL_OBJECTS =

render_engine: CMakeFiles/render_engine.dir/src/main.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/vector2.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/vector3.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/vector4.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/matrix22.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/matrix33.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/matrix44.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/quaternion.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/genmath.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/rasterizer.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/framebuffer.cpp.o
render_engine: CMakeFiles/render_engine.dir/src/camera.cpp.o
render_engine: CMakeFiles/render_engine.dir/build.make
render_engine: CMakeFiles/render_engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/mac/Documents/c++/render_engine/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable render_engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/render_engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/render_engine.dir/build: render_engine
.PHONY : CMakeFiles/render_engine.dir/build

CMakeFiles/render_engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/render_engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/render_engine.dir/clean

CMakeFiles/render_engine.dir/depend:
	cd /Users/mac/Documents/c++/render_engine && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/c++/render_engine /Users/mac/Documents/c++/render_engine /Users/mac/Documents/c++/render_engine /Users/mac/Documents/c++/render_engine /Users/mac/Documents/c++/render_engine/CMakeFiles/render_engine.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/render_engine.dir/depend

