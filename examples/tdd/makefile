# This makefile is a little more complicated than the ones seen so far. We have
# a task to build and run the main application (run, build), but we also have
# two tasks to run and build the unit tests (test, build-test)
#
# To run specific tasks use `make <task_name>`, i.e. `make test` to run the
# tests. The top task always runs by default.
run: build
	./adder

build:
	gcc adder_main.c adder.c -o adder

test: build-test
	./adder.spec

build-test:
	gcc adder.spec.c adder.c -o adder.spec

clean:
	rm -rf adder.spec adder