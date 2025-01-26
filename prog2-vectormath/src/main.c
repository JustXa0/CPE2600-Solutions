/**
 * @file main.c
 * @brief main - entry point for application
 * 
 * Course: CPE2600
 * Section: 151
 * Assignment: Vector Math
 * Name: James Prendiivlle
*/

#include <stdio.h>
#include "vector.h"

int main(int argc, char* argv[])
{
    int values[1000];
    int num_values = 0;

    int values2[1000];
    int num_values2 = 0;

    printf("Enter vector A: \n");

    while(scanf("%d", &values[num_values]) == 1)
    {
        num_values++;
        char nextChar = getchar();
        if(nextChar == '\n')
        {
            break;
        }
    }

    int a_size = values[0];

    if(a_size == 0)
    {
        return 1;
    }

    int vector_a[a_size];

    for(int i = 1; i < a_size+1; i++)
    {
        vector_a[i-1] = values[i];
    }

    printf("Enter vector B: \n");

    while(scanf("%d", &values2[num_values2]) == 1)
    {
        num_values2++;
        char nextChar = getchar();
        if(nextChar == '\n')
        {
            break;
        }
    }

    int b_size = values[0];

    if(b_size == 0)
    {
        return 1;
    }

    int vector_b[b_size];

    for(int i = 1; i < b_size+1; i++)
    {
        vector_b[i-1] = values2[i];
    }

    printf("Enter in the operation to perform: \n");
    int user_input;
    scanf("%d", &user_input);
    switch(user_input)
    {
        case 1:
        {
            int vector_c[a_size];
            if(vector_add(vector_a, a_size, vector_b, b_size, vector_c, a_size) == 0)
            {
                printf("The result is: \n");
                for(int i = 0; i < a_size; i++)
                {
                    printf("%d ", vector_c[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Error: Vector dimensions do not match \n");
            }
        }
        break;
        
        case 2:
        {
            int vector_c[a_size];
            if(vector_subtract(vector_a, a_size, vector_b, b_size, vector_c, a_size) == 0)
            {
                printf("The result is: \n");
                for(int i = 0; i < a_size; i++)
                {
                    printf("%d ", vector_c[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Error: Vector dimensions do not match \n");
            }
        }
        break;

        case 3:
        {
            //int vector_c[num_values];
            int result = 0;
            if(vector_dot_product(vector_a, a_size, vector_b, b_size, &result) == 0)
            {
                printf("The result is: \n");
                printf("%d \n", result);
            }
            else
            {
                printf("Error: Vector dimensions do not match \n");
            }
        }
        break;
        
        case 4:
        {
            int vector_c[a_size];
            if(vector_cross_product(vector_a, a_size, vector_b, b_size, vector_c, a_size) == 0)
            {
                printf("The result is \n");
                for(int i = 0; i < a_size; i++)
                {
                    printf("%d ", vector_c[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Error: Vector dimensions do not match");
            }
        }
        break;

        default:
            printf("Error: Incorrect operation given.");
        break;
    }
         
    return 0;
}