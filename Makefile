# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/cmake-3.12.4/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake-3.12.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/travis/build/DVDemon/otus_05_homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/travis/build/DVDemon/otus_05_homework

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/cmake-3.12.4/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/cmake-3.12.4/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	/usr/local/cmake-3.12.4/bin/cpack --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package

.PHONY : package/fast

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/usr/local/cmake-3.12.4/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test

.PHONY : test/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	/usr/local/cmake-3.12.4/bin/cpack --config ./CPackSourceConfig.cmake /home/travis/build/DVDemon/otus_05_homework/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source

.PHONY : package_source/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/cmake-3.12.4/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/cmake-3.12.4/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/cmake-3.12.4/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/cmake-3.12.4/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/cmake-3.12.4/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/cmake-3.12.4/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/travis/build/DVDemon/otus_05_homework/CMakeFiles /home/travis/build/DVDemon/otus_05_homework/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/travis/build/DVDemon/otus_05_homework/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named gtests

# Build rule for target.
gtests: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gtests
.PHONY : gtests

# fast build rule for target.
gtests/fast:
	$(MAKE) -f CMakeFiles/gtests.dir/build.make CMakeFiles/gtests.dir/build
.PHONY : gtests/fast

#=============================================================================
# Target rules for targets named library

# Build rule for target.
library: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 library
.PHONY : library

# fast build rule for target.
library/fast:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/build
.PHONY : library/fast

#=============================================================================
# Target rules for targets named editor

# Build rule for target.
editor: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 editor
.PHONY : editor

# fast build rule for target.
editor/fast:
	$(MAKE) -f CMakeFiles/editor.dir/build.make CMakeFiles/editor.dir/build
.PHONY : editor/fast

context.o: context.cpp.o

.PHONY : context.o

# target to build an object file
context.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/context.cpp.o
.PHONY : context.cpp.o

context.i: context.cpp.i

.PHONY : context.i

# target to preprocess a source file
context.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/context.cpp.i
.PHONY : context.cpp.i

context.s: context.cpp.s

.PHONY : context.s

# target to generate assembly for a file
context.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/context.cpp.s
.PHONY : context.cpp.s

document.o: document.cpp.o

.PHONY : document.o

# target to build an object file
document.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/document.cpp.o
.PHONY : document.cpp.o

document.i: document.cpp.i

.PHONY : document.i

# target to preprocess a source file
document.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/document.cpp.i
.PHONY : document.cpp.i

document.s: document.cpp.s

.PHONY : document.s

# target to generate assembly for a file
document.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/document.cpp.s
.PHONY : document.cpp.s

figure.o: figure.cpp.o

.PHONY : figure.o

# target to build an object file
figure.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure.cpp.o
.PHONY : figure.cpp.o

figure.i: figure.cpp.i

.PHONY : figure.i

# target to preprocess a source file
figure.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure.cpp.i
.PHONY : figure.cpp.i

figure.s: figure.cpp.s

.PHONY : figure.s

# target to generate assembly for a file
figure.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure.cpp.s
.PHONY : figure.cpp.s

figure_factory.o: figure_factory.cpp.o

.PHONY : figure_factory.o

# target to build an object file
figure_factory.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_factory.cpp.o
.PHONY : figure_factory.cpp.o

figure_factory.i: figure_factory.cpp.i

.PHONY : figure_factory.i

# target to preprocess a source file
figure_factory.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_factory.cpp.i
.PHONY : figure_factory.cpp.i

figure_factory.s: figure_factory.cpp.s

.PHONY : figure_factory.s

# target to generate assembly for a file
figure_factory.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_factory.cpp.s
.PHONY : figure_factory.cpp.s

figure_stream.o: figure_stream.cpp.o

.PHONY : figure_stream.o

# target to build an object file
figure_stream.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_stream.cpp.o
.PHONY : figure_stream.cpp.o

figure_stream.i: figure_stream.cpp.i

.PHONY : figure_stream.i

# target to preprocess a source file
figure_stream.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_stream.cpp.i
.PHONY : figure_stream.cpp.i

figure_stream.s: figure_stream.cpp.s

.PHONY : figure_stream.s

# target to generate assembly for a file
figure_stream.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/figure_stream.cpp.s
.PHONY : figure_stream.cpp.s

lib.o: lib.cpp.o

.PHONY : lib.o

# target to build an object file
lib.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/lib.cpp.o
.PHONY : lib.cpp.o

lib.i: lib.cpp.i

.PHONY : lib.i

# target to preprocess a source file
lib.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/lib.cpp.i
.PHONY : lib.cpp.i

lib.s: lib.cpp.s

.PHONY : lib.s

# target to generate assembly for a file
lib.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/lib.cpp.s
.PHONY : lib.cpp.s

line.o: line.cpp.o

.PHONY : line.o

# target to build an object file
line.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/line.cpp.o
.PHONY : line.cpp.o

line.i: line.cpp.i

.PHONY : line.i

# target to preprocess a source file
line.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/line.cpp.i
.PHONY : line.cpp.i

line.s: line.cpp.s

.PHONY : line.s

# target to generate assembly for a file
line.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/line.cpp.s
.PHONY : line.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/editor.dir/build.make CMakeFiles/editor.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/editor.dir/build.make CMakeFiles/editor.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/editor.dir/build.make CMakeFiles/editor.dir/main.cpp.s
.PHONY : main.cpp.s

point.o: point.cpp.o

.PHONY : point.o

# target to build an object file
point.cpp.o:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/point.cpp.o
.PHONY : point.cpp.o

point.i: point.cpp.i

.PHONY : point.i

# target to preprocess a source file
point.cpp.i:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/point.cpp.i
.PHONY : point.cpp.i

point.s: point.cpp.s

.PHONY : point.s

# target to generate assembly for a file
point.cpp.s:
	$(MAKE) -f CMakeFiles/library.dir/build.make CMakeFiles/library.dir/point.cpp.s
.PHONY : point.cpp.s

tests.o: tests.cpp.o

.PHONY : tests.o

# target to build an object file
tests.cpp.o:
	$(MAKE) -f CMakeFiles/gtests.dir/build.make CMakeFiles/gtests.dir/tests.cpp.o
.PHONY : tests.cpp.o

tests.i: tests.cpp.i

.PHONY : tests.i

# target to preprocess a source file
tests.cpp.i:
	$(MAKE) -f CMakeFiles/gtests.dir/build.make CMakeFiles/gtests.dir/tests.cpp.i
.PHONY : tests.cpp.i

tests.s: tests.cpp.s

.PHONY : tests.s

# target to generate assembly for a file
tests.cpp.s:
	$(MAKE) -f CMakeFiles/gtests.dir/build.make CMakeFiles/gtests.dir/tests.cpp.s
.PHONY : tests.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/local"
	@echo "... package"
	@echo "... test"
	@echo "... gtests"
	@echo "... package_source"
	@echo "... library"
	@echo "... edit_cache"
	@echo "... editor"
	@echo "... rebuild_cache"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... install"
	@echo "... context.o"
	@echo "... context.i"
	@echo "... context.s"
	@echo "... document.o"
	@echo "... document.i"
	@echo "... document.s"
	@echo "... figure.o"
	@echo "... figure.i"
	@echo "... figure.s"
	@echo "... figure_factory.o"
	@echo "... figure_factory.i"
	@echo "... figure_factory.s"
	@echo "... figure_stream.o"
	@echo "... figure_stream.i"
	@echo "... figure_stream.s"
	@echo "... lib.o"
	@echo "... lib.i"
	@echo "... lib.s"
	@echo "... line.o"
	@echo "... line.i"
	@echo "... line.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... point.o"
	@echo "... point.i"
	@echo "... point.s"
	@echo "... tests.o"
	@echo "... tests.i"
	@echo "... tests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

