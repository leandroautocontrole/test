# Project Euler Template

## Introduction

To use this template you need to create a source code and after adding your solution compile it with the commands described bellow.

## The source code

### Creating the source code

To create the source code issue the command:

`$ make peX.c`

where `X` is the number of the exercise you want to address. For example, lets assume from now on that we want to program a solution for exercise number 42. Issue:

`$ make pe42.c`

And this will create the source code for you to implement the solution.

### What to do inside the source code

* Add your name in the Author copyright notice
* Go to function pe42() in our example, and start to code your solution there.
* Do **NOT** change the function main()
* Add the problem description in the comments before the pe42() function
* You can add more functions at the end (before the footnote)
* The answer is to be put in a unsigned int variable "r" that is already declared.
* You can also reuse your functions if you add them in the myeulerlib.c and the prototype at myeulerlib.h files

## The libraries

### The project library: What is inside projecteuler.h and projecteuler.c

**DO NOT EDIT THESE FILES**

This library (.h) and the definition file (.c) contains some functions that will help you check during loops if the file is still running.

The functionalities are:

* GRABsignals() and LEGOsignals() should not be changed in any way. They are there to grab and let go Operating System's signals such as INT, QUIT and ALARM. They are used only in function main(). Do not use it anywhere else. Do not touch or alter the function main().
* You can use the function ctrlc_printf("..."); to print inside a loop, only if the user press CONTROL+C
    - Example:

    ctrlc_printf("Current result is %lu\n", r);

    This will print a partial result only when the user press CONTROL+C

* You can use the function minutes() to know how many minutes have passed.
    - Example:

    if( 2==minutes() ) break;

    This will break a loop if 2 minutes have passed

    The Project Euler has a rule that all problems can be solved by a good solution that finds the answer in LESS THAN ONE MINUTE (the one minute rule). So, if your program takes more than one minute to find a solution, you may need to re-think your algorithm.

### The user library: myeulerlib.c and myeulerlib.h

This library (.h) and its corresponding definition file (.c) is available for you to create as many useful functions as you wish, to be used in all exercises.

So, for example, suppose you created a function that helps you solve problem number 1, and you have added that function to the file pe1.c;

Now when you are trying to solve problem number 2 you realize that the same function may be of help.

Then, instead of having to code again or to copy the function to pe2.c, you move the function to myeulerlib.c and you move the prototype to myeulerlib.h.

That way, all problems that need that function will have access to it.

## Compiling your source

To compile, simple issue the command:

`$ make pe42.x SRC=projecteuler.c myeulerlib.c`

This command will compile the problem, linking the source code with both libraries, the project library and your personal library.

Run it with the usual:

`$ ./pe42.x`

## Author

* Ruben Carlo Benante
* Contact: rcb@upe.br
* Date: 2019-08-17
* Copyright License GNU/GPL 2.0

