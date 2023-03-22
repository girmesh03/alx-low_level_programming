# 0x1C. C - Makefiles

## Overview
A Makefile is a script that automates the process of building a program from source code. In C, a Makefile is used to compile and link multiple source files into an executable program. Makefiles are especially useful for large projects with many source files, as they can save time and ensure that the program is built correctly every time.

## Basic Syntax
A Makefile consists of rules and dependencies. The basic syntax of a rule is as follows:

```.PHONY: clean

clean:
    rm *.o
```

This Makefile defines a phony target called clean, which removes all object files (*.o) from the directory.

## Conclusion
Makefiles are an essential tool for building programs in C. By automating the build process, Makefiles can save time and ensure that the program is built correctly every time. With variables and phony targets, Makefiles can be made even more powerful and flexible.