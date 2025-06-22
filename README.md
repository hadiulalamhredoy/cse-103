C programming 


What is C Programming?

C is a powerful, general-purpose programming language developed in the early 1970s by Dennis Ritchie at Bell Labs. It is one of the oldest and most widely used programming languages, especially known for system programming and developing operating systems like Unix.



Key Features of C

Procedural Language:
C follows a procedural programming paradigm, focusing on functions and procedures to operate on data.

Low-level Access:
C provides direct access to memory through pointers, making it very efficient and powerful for system-level programming.

Portability:
C programs can be compiled on many different platforms with little or no modification.

Simple and Minimalistic:
C has a relatively small set of keywords and syntax, giving programmers fine control over system resources.

Fast Execution:
Because it’s close to machine code, C programs run very quickly.




What Can You Do with C?

Develop Operating Systems:
Many OS kernels (like Unix and Linux) are written in C.

Write Embedded Systems Code:
Used for programming microcontrollers and hardware devices.

Create System Software:
Such as compilers, interpreters, and utilities.

Develop Game Engines:
Because of its speed and hardware-level control.




Example of Simple C Code

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}




Why Learn C?

It builds a strong foundation for understanding how computers work.

Many modern languages (like C++, Java, and Python) are influenced by C.

You gain better control over memory and system resources.

Essential for careers in systems programming, embedded systems, and game development.


1. Basic Concepts in C

a) Variables and Data Types

Variables store data values. In C, you need to declare the variable type before using it.

Common data types:

int — integer numbers (e.g., 5, -3)

float — decimal numbers (e.g., 3.14)

char — single characters (e.g., 'a', 'Z')

double — double precision decimal numbers


Example:

int age = 25;
float price = 99.99;
char grade = 'A';

b) Input and Output

printf() is used to print output to the screen.

scanf() is used to take input from the user.


Example:

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);
    return 0;
}

c) Control Structures

If-Else for decision making:


if (number > 0) {
    printf("Positive number\n");
} else {
    printf("Non-positive number\n");
}

Loops for repeating tasks:

for loop

while loop

do-while loop



Example (for loop):

for (int i = 0; i < 5; i++) {
    printf("i = %d\n", i);
}

d) Functions

Functions help organize code into reusable blocks.

Example:

#include <stdio.h>

void greet() {
    printf("Hello from a function!\n");
}

int main() {
    greet();
    return 0;
}


---

2. How to Set Up a C Programming Environment

Option 1: Online Compilers (Easy to Start)

You can write and run C code right in your browser with platforms like:

replit.com

ideone.com

onlinegdb.com


No installation needed!

Option 2: Install on Your Computer

Windows:
Install MinGW or use an IDE like Code::Blocks or Visual Studio.

Mac:
Use Xcode Command Line Tools by running xcode-select --install in Terminal.

Linux:
Use gcc compiler (usually pre-installed) or install it via package manager, e.g., sudo apt install build-essential (Debian/Ubuntu).





