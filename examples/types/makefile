# This is a makefile. It contains information about how to build and run
# C programs - it makes your life a little easier than having to write `gcc` all
# the time.
#
# Tasks in a makefile look like this:
run: build
	./types

# the format is:
#   name-of-task: dependencies
#   	task-commands
#
# The name should be self explanatory. The dependencies are other tasks that
# need to be run before the task-commands are run. And the task-commands is just
# a shell commmand
#
# v. important - the commands _must_ be indented with a tab character, otherwise
# everything breaks
#
# So here, run depends on build, which builds the executable using gcc.

build:
	gcc types.c -o types

# it's nice to tidy up after yourself...
clean:
	rm -rf types