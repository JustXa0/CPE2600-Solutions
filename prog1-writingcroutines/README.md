## Introduction

The purpose of this assignment is to familiarize you with writing functions in C.

Work on the assignment is to be done ***individually***.  You are welcome to collaborate with class members, but the project must be your own work.

## Background and References

A function is a grouping of statements that perform a set of operations in code.  In the C programming language a function may or may not return any values and may or may not have any parameters.  Functions have a name, body, return value (optional), and parameters (optional).

## Project Description

In this assignment, you will be creating several functions within a single source file.  This file has been created for you in [src/main.c](src/main.c).  Function headers are provided for you that describe what each function should do.

### Function Descriptions

- ```bool is_prime(int value)``` - Determines if the given integer is prime
- ```void print_primes(int max_value)``` - Prints all prime numbers less than or equal to the given value
- ```double compute_average(int values[], int count)``` - Computes the average (mean) of an array of numbers
- ```int series_sum(int min_value, int max_value)``` - Computes the sum of consecutive numbers in the series from the ```min_value``` to the ```max_value``` inclusive.
- ```void print_addition_series_endpoints(int total)``` - Prints the endpoints of all series of consecutive numbers that sum to the given value.
  - NOTE: there may be more than one set of endpoints.  This function ***must*** print them all.  For example:
    - ```1 + 2 + 3 + 4 + 5 = 15``` -> The function should print 1 and 5 as the endpoints
    - ```4 + 5 + 6 = 15``` -> The function should print 4 and 6 as the endpoints
    - ```7 + 8 = 15``` -> The function should print 9 and 10 as the endpoints
- ```int compute_discriminant(int a, int b, int c)``` - Computes the discriminant of from the quadratic equation from the given coefficients of a quadratic polynomial
- ```void print_quadratic_solution(int a, int b, int c)``` - Prints the solution to the quadratic polynomial with the given coefficients
  - Print both values if there are two solutions 
  - Print 'no real solution' if there is no real solution
  - Print only one value if there is only a single solution - do ***NOT*** print the same value twice

When implementing these functions keep in mind the principle of don't repeat yourself (DRY).  If you find a situation where one function you implement could be invoked from another to reduce the amount of duplicated code, make sure you do so.

### Additional Functions

Create two (2) additional functions of your choice.  Make sure you document their function with a comment block and inline comments as appropriate.  Formatting should follow the style guidelines.

### Code Structure

Code must follow style guidelines as defined in the course material.

## Getting Started

The following files have been provided for you in your repository:

At the top of ***EACH SOURCE FILE*** include a comment block with your name, assignment name, and section number.

## Hints and Tips

- You may find it helpful to use the math library for this assignment.  The header file ```math.h``` has already been included if you'd like to use it.  In order for your program to compile and link with no errors, you will need to tell the compiler that you are using the math library.  This requires using the ```-lm``` flag. 

  ***NOTE:*** the ```-lm``` flag ***must*** go at the end of your compile command string.  For example:

  ```text
  gcc main.c -lm
  ```

- To make sure your code compiles without any warning, it can be helpful to tell the compiler to report all potential warnings (e.g. unused variables, type conflict, etc.).  This can be done with the ```-Wall``` compiler flag which turns on ```all``` warnings ```W```.  For example:

  ```text
  gcc -Wall main.c -lm
  ```

## Testing and Debugging

Notice that the ```main``` function is empty.  This function (the program entry point) should be used to test the functionality of ***ALL*** your implemented functions.  Make sure write appropriate tests.  Consider 'edge cases' for values (e.g. arrays of length 0, negative numbers, zero coefficients, etc.).  Your created test cases will be included as part of your grade on this assignment.

Include appropriate error messages for incorrect parameter values

***NOTE:*** Don't forget to test your own functions too.

## Deliverables

When you are ready to submit your assignment prepare your repository:

- Make sure your name, assignment name, and section number are all files in your submission - in comment block of source file(s) and/or at the top of your report file(s)
- Make sure you have completed all activities and answered all questions.
- Make sure you cite your sources for all research.
- Make sure your assignment code is commented thoroughly.
- Include in your submission, a set of suggestions for improvement and/or what you enjoyed about this assignment.
- Make sure all files are committed and pushed to the main branch of your repository.

***NOTE***: Do not forget to 'add', 'commit', and 'push' all new files and changes to your repository before submitting.

### Additional Submission Notes

If/when using resources from material outside what was presented in class (e.g., Google search, Stack Overflow, etc.) document the resource used in your submission.  Include exact URLs for web pages where appropriate.

NOTE: Sources that are not original research and/or unreliable sources are not to be used.  For example:

- Wikipedia is not a reliable source, nor does it present original research: [https://en.wikipedia.org/wiki/Wikipedia:Wikipedia_is_not_a_reliable_source](https://en.wikipedia.org/wiki/Wikipedia:Wikipedia_is_not_a_reliable_source)
- ChatGPT is not a reliable source: [https://thecodebytes.com/is-chatgpt-reliable-heres-why-its-not/](https://thecodebytes.com/is-chatgpt-reliable-heres-why-its-not/)

You should ensure that your program compiles without warnings (using -Wall) or errors prior to submitting.  Make sure your code is well documented (inline comments for complex code as well as comment blocks on functions).  Make sure you check your code against the style guidelines.

To submit, create a new release on your repository to tag it as being ready to submit.  Copy the URL for the release and submit the link to Canvas.

## Grading Criteria

- (5 Points) Submitted files follow submission guidelines
    - Only the requested files were submitted
    - Files are contain name, assignment, section
    - Sources outside of course material are cited
- (5 Points) Suggestions
    - List of suggestions for improvement and/or what you enjoyed about this assignment
- (10 Points) Code standard
  - Code compiles without errors or warnings
  - Code is formatted and commented per the course coding standard
- (30 Points) Implementation of required functions
- (20 Points) Functions pass instructor test cases
- (10 Points) Implementation of two (2) functions of your choice
- (10 Points) Submitted test cases in ```main``` adequately test the required functions
- (10 Points) Submitted test cases in ```main``` adequately test your own functions