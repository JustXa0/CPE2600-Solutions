/**
 * @file vector.c
 * @brief Vector Math - Vector function definitions
 * 
 * Course: CPE2600
 * Section: 151
 * Assignment: Vector Math
 * Name: James Prendiville
*/

#include <stdio.h>
#include "vector.h"

/**
 * @brief This function prints a vector to standard out
 * @param vector - the vector to print
 * @param size - the length of the vector to print
*/
void print_vector(int vector[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d \n", vector[i]);
    }
    printf("\n");
}

/**
 * @brief This function performs vector addition on vectors A and B
 * and sets the result in vector C
 * 
 * @param vector_a - the first add operand vector
 * @param size_a - Length of the first vector
 * @param vector_b - the second add operand vector
 * @param size_b - Length of the second vector
 * @param vector_c - output vector
 * @param size_c - size of the output vector
 * 
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
*/
int vector_add(int vector_a[], int size_a,
               int vector_b[], int size_b,
               int vector_c[], int size_c)
{
    if(size_a == size_b && size_b == size_c)
    {
        for(int i = 0; i < size_a; i++)
        {
            vector_c[i] = vector_a[i] + vector_b[i];
        }
        return 0;
    }
    return -1;
}

/**
 * @brief This function performs vector subtraction on vectors A and B
 * and sets the result in vector C
 * 
 * @param vector_a - the first subtract operand vector
 * @param size_a - Length of the first vector
 * @param vector_b - the second subtract operand vector
 * @param size_b - Length of the second vector
 * @param vector_c - output vector
 * @param size_c - size of the output vector
 * 
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
*/
int vector_subtract(int vector_a[], int size_a,
                    int vector_b[], int size_b,
                    int vector_c[], int size_c)
{
    ///TODO: Add (()&&()) for proper order of operations
    if(size_a == size_b && size_b == size_c)
    {
        for(int i = 0; i < size_a; i++)
        {
            vector_c[i] = vector_a[i] - vector_b[i];
        }
        return 0;
    }
    return -1;
}

/**
 * @brief This function performs vector dot product on vectors A and B
 * and sets the result in 'result'
 *
 * @param vector_a - the first dot product operand vector
 * @param size_a - length of the first vector
 * @param vector_b - the second dot product operand vector
 * @param size_b - length of the second vector
 * @param result - address of where to store the result
 *
 * @return 0 - The vector operation was successful
 * @return -1 - The vector operation failed
 */
int vector_dot_product(int vector_a[], int size_a,
                       int vector_b[], int size_b,
                       int* result)
{
    if(size_a == size_b)
    {
        int temp = 0;
        for(int i = 0; i < size_a; i++)
        {
            temp += (vector_a[i] * vector_b[i]);
        }
        *result = temp;
        return 0;
    }
    return -1;
}

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
                         int vector_c[], int size_c)
{
    ///TODO: Size should be 3 for Cross product
    if(size_a == size_b && size_b == size_c)
    {
        vector_c[0] = (vector_a[1] * vector_b[2]) - (vector_a[2] * vector_b[1]);
        vector_c[1] = (vector_a[2] * vector_b[0]) - (vector_a[0] * vector_b[2]);
        vector_c[2] = (vector_a[0] * vector_b[1]) - (vector_a[1] * vector_b[0]);
        
        return 0;
        
    }
    return -1;
}