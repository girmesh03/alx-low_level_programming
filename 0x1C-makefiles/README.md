# 0x1C. C - Makefiles

## Overview
A Makefile is a script that automates the process of building a program from source code. In C, a Makefile is used to compile and link multiple source files into an executable program. Makefiles are especially useful for large projects with many source files, as they can save time and ensure that the program is built correctly every time.

## Basic Syntax
A Makefile consists of rules and dependencies. The basic syntax of a rule is as follows:
```
target: dependencies
    command
```

target: The name of the file that the rule will create, typically an executable program.
dependencies: The names of the files that the target depends on, typically source code files.
command: The command that will be executed to create the target file, typically a compiler command.

For example, a simple Makefile for a program called hello that consists of two source files main.c and hello.c might look like this:

```
hello: main.c hello.c
    gcc -o hello main.c hello.c
```
This Makefile has a single rule that specifies the target hello and the dependencies main.c and hello.c. The command to build the target is gcc -o hello main.c hello.c.

## Using Variables
Makefiles allow the use of variables, which can simplify the process of building a program. Variables can be defined using the = operator:

```
CC = gcc
```
This defines a variable CC that can be used in the Makefile. For example:

```
hello: main.c hello.c
    $(CC) -o hello main.c hello.c
```
This Makefile uses the $(CC) variable instead of the gcc command. This allows the compiler to be changed simply by modifying the value of the CC variable.

## Phony Targets
Makefiles can also include phony targets, which are targets that do not correspond to actual files. Phony targets are typically used for tasks that do not produce output files, such as cleaning up intermediate files or running tests. Phony targets are defined using the .PHONY directive:

```
.PHONY: clean
clean:
    rm *.o
```
This Makefile defines a phony target called clean, which removes all object files (*.o) from the directory.

## Conclusion
Makefiles are an essential tool for building programs in C. By automating the build process, Makefiles can save time and ensure that the program is built correctly every time. With variables and phony targets, Makefiles can be made even more powerful and flexible.