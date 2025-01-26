## Introduction

The purpose of this assignment is to design, code, and test a C program that can perform vector math.  It is intended to familiarize you with using arrays, header files, separate compilation, and parameter passing in C.

Work on the assignment is to be done ***individually***.  You are welcome to collaborate with class members, but the project must be your own work.

## Background and References

A vector is a quantity that represents both a magnitude and direction.  It is used in many fields to represent different things.  For example, a vector could be used to indicate a force applied to an object at a given angle.

Different mathematical transformations can be performed against vectors for various reasons.  The goal of this assignment is for you to write a program that will perform different mathematical operations on one or more vectors.

For more detailed examples and explanations see:

- Introduction to Vectors – [https://www.mathsisfun.com/algebra/vectors.html](https://www.mathsisfun.com/algebra/vectors.html)

## Project Description

Consider the following mathematical operations that can be performed with vectors.

### Add

Add two vectors together using the formula:

If A = (a<sub>i</sub>) vector of length *n* and B = (b<sub>i</sub>) is vector of length n, then the sum A + B is also a vector of length *n* such that A + B = (a<sub>i</sub> + b<sub>i</sub>)

The definition of vector addition indicates an element-by-element addition.  The elements of vector A are added to the exact corresponding elements of vector B.  To add A and B they must be the same dimensions.

For example:<br>
A = (1, 4)<br>
B = (1, 3)<br>
A + B = (1 + 1, 4 + 3) = (2, 7)

### Subtract

Subtract two vectors using the formula:

If A = (a<sub>i</sub>) vector of length *n* and B = (b<sub>i</sub>) is vector of length n, then the difference A - B is also a vector of length *n* such that A - B = (a<sub>i</sub> - b<sub>i</sub>)
 
The definition of vector subtraction indicates an element-by-element subtraction.  The elements of vector A are subtracted by the exact corresponding elements of vector B.  To subtract A and B they must be the same dimensions.

For example:<br>
A = (1, 4)<br>
B = (1, 3)<br>
A - B = (1 - 1, 4 - 3) = (0, 1)

### Multiply

Multiplying two vectors comes in two forms – dot product and cross product

#### Dot Product 

The dot product results in a scalar value using the following formula:<br>
If A = (a<sub>i</sub>) vector of length *n* and B = (b<sub>i</sub>) is vector of length n, then the dot product A · B is a scalar such that A · B = a<sub>1</sub>b<sub>1</sub> + a<sub>2</sub>b<sub>2</sub> + … + a<sub>n</sub>b<sub>n</sub>

The definition of dot product indicates an element-by-element multiplication.  The elements of vector A are multiplied by the exact corresponding elements of vector B and all results are added together.

For example:<br>
A = (1, 4)<br>
B = (1, 3)<br>
A · B = 1 * 1 + 4 * 3 = 13

#### Cross Product

The cross-product results in a vector that is perpendicular to each of the source vectors A and B.  A cross product must be performed on vectors of 3 dimensions.<br>
If A = (a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>) and B = (b<sub>1</sub>, b<sub>2</sub>, b<sub>3</sub>), then the cross product A x B is a vector such that A x B = (c<sub>1</sub>, c<sub>2</sub>, c<sub>3</sub>) where:

c<sub>1</sub> = a<sub>2</sub> * b<sub>3</sub> - a<sub>3</sub> * b<sub>2</sub><br>
c<sub>2</sub> = a<sub>3</sub> * b<sub>1</sub> - a<sub>1</sub> * b<sub>3</sub><br>
c<sub>3</sub> = a<sub>1</sub> * b<sub>2</sub> - a<sub>2</sub> * b<sub>1</sub>

NOTE: the ordering may not be inherently obvious, it doesn't really look like it follows a pattern.

For example:<br>
A = (1, 2, 3)<br>
B = (4, 5, 6)<br>
A x B = (2 * 6 - 3 * 5, 3 * 4 - 1 * 6, 1 * 5 - 2 * 4) = (-3, 6, -3)

Your task is to create a program that will perform vector math for two vectors and print the result.  You must implement the vector operations as separate functions in a 'c' file that is separate from your main.  A [header](src/vector.h) file with prototypes for the required operations is provided for you.

***Do not modify the given header file***.  The exact prototypes defined in the header file will be used to test your code.  Make sure your function definitions exactly match the header file prototypes.

Your main function must prompt the user for two vectors: A and B to be read in via standard input.  It must then prompt the user for an operation to perform represented as a number:

- 1 indicates addition
- 2 indicates subtraction
- 3 indicates dot product
- 4 indicates cross product

If any operation cannot be performed on the vectors (e.g. if the dimensions do not allow the operation to be done), print an error message to standard error and exit the program (return from main) with a return code that is greater than 0.

The input format for each vector is a series of integers separated by spaces:

- The first integer *n* will contain the number of dimensions in the vector.  The number must be greater than zero.  If the user enters a number that is less than or equal to zero, print an error message to standard error and exit the program (return from main) with a return code that is greater than 0.
- The rest of the input will contain *n* values representing the vector magnitude in each dimension.  These numbers can be any integer (positive, negative, or zero).
- You can assume all numbers specified will be integers.

For our two-dimensional example, the input for A would be:
```text
2 1 4
```
and the input for B would be:
```text
2 1 3
```

## Development Requirements

- Remember that to successfully add two vectors the dimensions must match.  So, a vector of length *m* can only be added to a vector of length *m*, but a vector of length *m* cannot be added to a vector of length *n* unless *m* == *n*.  If the input vectors are not the correct size, print an error message to the user and have main return a nonzero value.
- Remember that to successfully subtract two vectors the dimensions must match.  So, a vector of length *m* can only be subtracted from a vector of length *m*, but a vector of length *m* cannot be subtracted from a vector of length *n* unless *m* == *n*.  If the input vectors are not the correct size, print an error message to the user and have main return a nonzero value.
- Remember that to successfully compute the dot product of two vectors the dimensions must match.  So, the dot product can only be performed on two vectors of length *m*.  A dot product cannot be computed with vector of length *m* and a vector of length *n* unless *m* == *n*.  If the input vectors are not the correct size, print an error message to the user and have main return a nonzero value.
- Remember that to successfully compute a cross product of two vectors, the dimensions of each must be 3. If the input vectors are not the correct size, print an error message to the user and have main return a nonzero value.
- Do NOT return an array that has been allocated on the stack of the called function.
- Make sure you allocate the exact space you need for each array.  No more, no less.
- Don't forget to correctly include the header file to ensure the function prototypes are defined.  Do ***NOT*** define function prototypes in main.c.  Include the header file instead.

### Compiling

You are given a make file (titled 'Makefile') to build your program.  This file will need to be modified to include any additional source files.  The output executable must be 'vector_math' and must be compiled with the -Wall argument to turn on all warnings.  The vector math program should build without errors or warnings.

## Getting Started

The following files have been provided for you in your repository:

- [vector.h](src/vector.h) - Header file containing the function declarations for the required vector operations.
  - NOTE: Do ***NOT*** modify this file.  Function declarations and variable names remain as written in this file.  The given header file will be used to test your submitted program.
- [Makefile](src/Makefile) – a make file to build your vector math application
  - NOTE: you will need to modify this file if you add additional source and header files

NOTE: You will have to create additional source/header files as part of this assignment.

At the top of ***EACH SOURCE FILE*** include a comment block with your name, assignment name, and section number.

## Hints and Tips

### Read the vectors

A simple way to read the vectors is to use scanf.  Here is an example:
```c
#include <stdio.h>

int main() {

    // Read in the vector dimensions
    int dimensions;
    scanf("%d", &dimensions);

    // Read in the vector
    for(int i = 0; i < dimensions; i++) {
        int value;
        scanf("%d", &value);
        // Store the value in the vector
    }

    // Do something with the vector
    return 0;
}
```
Obviously, you'll need to store the values somewhere.  For this assignment you will need to store your vectors in an array.  Remember that arrays in C do not know their size, so you will also have to store the number of elements.  Both values (the vector values and the length of the vector) will be passed into the functions for performing the vector operations.

### Perform the vector operation

Your code to implement the required functions must go in a separate 'c' file from ```main.c```.  Name this file ```vector.c```.  Remember that you can't allocate an array on the stack inside a function and return the value.  This will most likely cause a runtime error when your program later attempts to access the array to print it out.  Instead, the result vector array (as well as the size) will be passed to the function that performs the operation and should be modified by the calling function directly.  For example:

```c
int vector_add(int vector_a[], int size_a,
               int vector_b[], int size_b,
               int vector_c[], int size_c)
{
    //
    // Error checking etc
    //
    vector_c[0] = 5;  // NOTE: this is NOT correct vector addition, but it shows
                      //       how to modify elements in the result vector
    return 0;
}
```

The return value will either be '0' if the operation could be performed successfully or -1 if the operation failed (e.g. the vector dimensions aren't correct for the operation).  Don't forget to create the result vector that is big enough to store the result before calling the function.

NOTE: For this assignment you will be required to use arrays to store all your vectors.

NOTE: an array is essentially just a continuous allocation of memory (one for each element).  When passed to a function the compiler passes the address of the array to the function.  So when you modify the contents of the array, you are actually modifying the original contents.

NOTE: that the result for the dot product is stored in a pointer passed into the function.  This allows the function to return a success or error return code along with setting the result.

### Print the result

Once you have the result, you'll need to print it to the screen.  Print the vector elements on one line with elements separated by spaces.  A sample output is given later in the lab description.

## Testing and Debugging

You can test your code using the example below.  Your program should behave in a similar way.  You should test your code with other vector sizes as well.

- Vectors with mismatched dimensions
- Large vectors
- Small vectors
- etc.

Here is a sample of what the program execution should look like.
```text
Enter vector A:
2 1 3
Enter vector B:
2 1 4
Enter the operation to perform:
1
The result is:
2 7
```

Additional input/output samples can be found in [SampleOutput.txt](../SampleOutput.txt)

NOTE: These tests are not all-inclusive.  You will need to make sure your code performs all necessary error checking as described. 

## Deliverables

When you are ready to submit your assignment prepare your repository:

- Make sure your name, assignment name, and section number are in comments on ***ALL*** source files.
- ALSO, include in your source file(s) file with a set of suggestions for improvement and/or what you enjoyed about this assignment.
- Make sure your assignment code is commented thoroughly.
- Make sure all files are committed and pushed to the main branch of your repository.

### Additional Submission Notes

If/when using resources from material outside what was presented in class (e.g., Google search, Stack Overflow, etc.) document the resource used in your submission.  Include exact URLs for web pages where appropriate.

NOTE: Sources that are not original research and/or unreliable sources are not to be used.  For example:

- Wikipedia is not a reliable source, nor does it present original research: [https://en.wikipedia.org/wiki/Wikipedia:Wikipedia_is_not_a_reliable_source](https://en.wikipedia.org/wiki/Wikipedia:Wikipedia_is_not_a_reliable_source)
- ChatGPT is not a reliable source: [https://thecodebytes.com/is-chatgpt-reliable-heres-why-its-not/](https://thecodebytes.com/is-chatgpt-reliable-heres-why-its-not/)

You should ensure that your program compiles without warnings (using -Wall) or errors prior to submitting.  Make sure your code is well documented (inline comments for complex code as well as comment blocks on functions).  Make sure you check your code against the style guidelines.

To submit, copy the URL for your repository and submit the link to Canvas.

## Grading Criteria

- (5 Points) Submitted files follow submission guidelines
  - Only the requested files were submitted
  - Files are contain name, assignment, section
  - Sources outside of course material are cited
- (5 Points) Suggestions - 
  - List of suggestions for improvement and/or what you enjoyed about this assignment
- (10 Points) Code standard
  - Code compiles without errors or warnings
  - Code is formatted and commented per the course coding standard
- (75 Points) Code passes test cases
