# Reading-Kernighan-Ritchie-C

Some of these executables use End of File, which if you don't know, can usually be signalled by hitting Control-D. To use some of the command line tools especially in [Chapter One](https://github.com/rvonsch/reading-kernighan-ritchie-c#chapter-one) and perhaps beyond make use of this very low level operation.

##### 1. Open executable

##### 2. Type or paste text

##### 3. Ctrl-D

Kernighan and Ritchie's C Programming Language offers the best material from which to begin your journey. 

We each write code that makes sense to us, so it's always interesting to see how others take on the same challenge. 

Unlike [Project Euler](https://projecteuler.net), the exercises in this book are less about solving an equation than they are about using your knowledge of the language to craft software that simply works.

## Getting Started

Find what exercise you're looking for below!

* Usually the top of main.c will include a copy of the exercise text

### Chapter One

#### Exercise 1-13` "Word Length Histogram" demonstrates my first crack at creating a horizontal histogram. It works but needs to handle large input data better. Character Histogram works better.

#### Exercise 1-14` "Character Histogram" is by far my favorite one into the book. It suggests creating an OS X Command Line Tool that takes input and draws a histogram showing the frequency of lengths of characters. I chose to only count the alphabet. Of course, this could easily be modified to make a bar graph displaying alphanumeric data and symbols.

#### Exercise 1-19` "Reverse String" reverses the character string s. Use it to write a program that reverses its input a line at a time. I copied a previous function example in the book called getLine, then added my own function `void reverses(char[])`.
&nbsp;&nbsp;&nbsp;&nbsp;I asked a question on StackOverflow and got downvoted, but some fellows' answers helped me understand C a bit more. In my `void reverses(char[])` function, the variable length array was not being defined using the Xcode compiler and debugger to test. I also was using a while loop instead of for. Thanks to some contributors, everything works on the initial commit.

##### Disclaimer

The Command Line Tools executable files may not be up to date and reflective of the .c files. If there is an easy way of versioning both execs and .c files please let me know. 
