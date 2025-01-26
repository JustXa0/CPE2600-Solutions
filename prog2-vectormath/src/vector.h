/**
 * @file vector.h
 * @brief Vector Math - Vector function prototypes
 *
 * Course: CPE2600
 * Section: 151
 * Assignment: Vector Math
 * Name: James Prendiville
 */

#ifndef VECTOR_H
#define VECTOR_H

/**
 * @brief This function prints a vector to standard out
 * @param vector - the vector to print
 * @param size - the length of the vector to print
 */
void print_vector(int vector[], int size);

/**
 * @brief This function performs vector addition on vectors A and B
 * and sets the result in vector C
 *
 * @param vector_a - the first add operand vector
 * @param size_a - length of the first vector
 * @param vector_b - the second add operand vector
 * @param size_b - length of the second vector
 * @param vector_c - output vector
 * @param size_c - size of the output vector
 *
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
 */
int vector_add(int vector_a[], int size_a,
               int vector_b[], int size_b,
               int vector_c[], int size_c);

/**
 * @brief This function performs vector subtraction on vectors A and B
 * and sets the result in vector C
 *
 * @param vector_a - the first add operand vector
 * @param size_a - length of the first vector
 * @param vector_b - the second add operand vector
 * @param size_b - length of the second vector
 * @param vector_c - output vector
 * @param size_c - size of the output vector
 *
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
 */
int vector_subtract(int vector_a[], int size_a,
                    int vector_b[], int size_b,
                    int vector_c[], int size_c);

/**
 * @brief This function performs vector dot product on vectors A and B
 * and sets the result in 'result'
 *
 * @param vector_a - the first add operand vector
 * @param size_a - length of the first vector
 * @param vector_b - the second add operand vector
 * @param size_b - length of the second vector
 * @param result - address of where to store the result
 *
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
 */
int vector_dot_product(int vector_a[], int size_a,
                       int vector_b[], int size_b,
                       int* result);

/**
 * @brief This function performs vector cross product on vectors A and B
 * and sets the result in vector C
 *
 * @param vector_a - the first add operand vector
 * @param size_a - length of the first vector
 * @param vector_b - the second add operand vector
 * @param size_b - length of the second vector
 * @param vector_c - output vector
 * @param size_c - size of the output vector
 *
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
 */
int vector_cross_product(int vector_a[], int size_a,
                         int vector_b[], int size_b,
                         int vector_c[], int size_c);

#endif