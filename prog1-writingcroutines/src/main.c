/**
 * @file main.c
 * @brief Implementation and invocation of functions in C
 *
 * Course: CPE2600
 * Section: 151
 * Assignment: Writing C Functions
 * Name: Jamie Prendiville
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * @brief Determine if the given integer is a prime number
 * @param value - the value to verify
 * @return true if the value is prime
 * @return false if the value is not prime
 */
bool is_prime(int value) {
    // I had many issues figuring out the end case for this for loop
    // solution was to take the square root of the supplied value and end at that result
    // solution was found at this article, section 2
    // https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not/
    // previously I had tried using the value variable as the end case or half of the value variable
    // neither worked
    if(!(value < 2))
    ///TODO: Review placement of {} (CodeStd)
    {
        for(int i = 2; i <= (int)sqrt(value); i++)
        {
            if(value % i == 0)
            {
                ///TODO: Functions should have a single return (CodeStd)
                return false;
            }
        }
    }
    else if (value <= 1)
    {
        return false;
    }
    // else
    //{
        return true;
    //}

    ///TODO: Ensure there is always a return:
    ///     main.c:47:1: error: control reaches end of non-void function [-Werror=return-type]
    
}

/**
 * @brief Print all the primes equal to or less than the input value
 * @param max_value - the max value for potential primes
 */
void print_primes(int max_value) {
    if (max_value < 0)
    {
        printf("There are no primes less than 0");
    }
    for(int i = 0; i <= max_value; i++)
    {
        if(is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

/**
 * @brief Determines the average (mean) of an array of values
 * @param values - the values to average
 * @param count - the number of values
 * @return the computed average (mean)
 */
double compute_average(int values[], unsigned int count) {

    double sum = 0;

    ///TODO: Use a For Loop (CodeStd)
    unsigned int i = 0;
    while(i < count)
    {
        sum += values[i];
        i++;
    }

    double average = sum/(double)count;
    return average;
}

/**
 * @brief Determine the sum of consecutive integer values (inclusive)
 * @param min_value - the value indicating the start of the series
 * @param max_value - the value indicating the end of the series
 * @return the computed sum
 */
int series_sum(int min_value, int max_value) {

    int sum = 0;

    for (int i = min_value; i <= max_value; i++)
    {
        sum += i;
    }

    return sum;
}

/**
 * @brief Prints end points of a series of consecutive integers
 *    that sum to the given value (inclusive)
 * @param total - the total for the series
 */
void print_addition_series_endpoints(int total) {

    if(total > 0)
    {
        for(int i = 0; i < total; i++)
        {
            for(int k = 0; k < i; k++)
            {
                if(series_sum(k,i) == total)
                {
                    for(int j = k; j <= i; j++)
                    {
                        if (j == i )
                        {
                            printf("%d ", j);
                        }
                        else
                        {
                            printf("%d + ", j);
                        }
                    }
                    printf("= %d \n", total);
                }
            }
        }
    }
    else if (total == 0)
    {
        printf("0 = 0 \n");
    }
    else
    {
        for(int i = 0; i > total; i--)
        {
            for(int k = 0; k > i; k--)
            {
                if(series_sum(i, k) == total)
                {
                    for(int j = i; j <= k; j++)
                    {
                        if (j == k)
                        {
                            printf("%d ", j);
                        }
                        else
                        {
                            printf("%d + ", j);
                        }
                    }
                    printf("= %d \n", total);
                }
            }
        }
    }
    
}

/**
 * @brief Computes the discriminant of the quadratic formula
 *   NOTE: A quadratic polynomial is of the form - a*x^2 + b*x + c = 0
 *   The discriminant is: b^2 - 4*a*c
 * @param a - the value of 'a' in the quadratic polynomial
 * @param b - the value of 'b' in the quadratic polynomial
 * @param c - the value of 'c' in the quadratic polynomial
 * @return the computed discriminant
 */
int compute_discriminant(int a, int b, int c) {

    b = (int)pow(b, 2);
    int result = b;
    result -= (4*a*c);
    return result;
}

/**
 * @brief Prints the solution to the quadratic polynomial
 *   or prints 'no real solution' if there is no real solution
 *   NOTE: A quadratic polynomial is of the form - a*x^2 + b*x + c = 0
 * @param a - the value of 'a' in the quadratic polynomial
 * @param b - the value of 'b' in the quadratic polynomial
 * @param c - the value of 'c' in the quadratic polynomial
 */
void print_quadratic_solution(int a, int b, int c) {

    int discriminate = compute_discriminant(a, b, c);

    if(discriminate < 0)
    {
        printf("no real solution \n");
    }
    else if (discriminate == 0)
    {
        b = -1*b;
        double result1 = (b+pow(discriminate, .5))/2*a;
        double result2 = (b-pow(discriminate, .5))/2*a;
        
        if((int)result1 % 2 == -1)
        {
            printf("Solution: %f \n", result2);
        }
        else
        {
            printf("Solution: %f \n", result2);
        }
    }
    else
    {
        b = -1*b;
        double result1 = (b+pow(discriminate, .5))/2*a;
        double result2 = (b-pow(discriminate, .5))/2*a;

        printf("Solution 1: %f \n", result1);
        printf("Solution 2: %f \n", result2);
        
    }

}

/**
 * @brief Calculates and returns the factorial of an integer
 *  NOTE: If the integer is negative the function returns a 0, symbolizing no factorial
 * @param value - the number of the factorial to be found
*/
long int find_factorial(long int value)
{
    if (value < 0)
    {
        ///TODO: Functions should have a single return (CodeStd)
        return 0;
    }

    if (value == 1 || value == 2)
    {
        return value;
    }
    else if (value == 0)
    {
        return 1;
    }
    
    else
    {
        return value*find_factorial(value - 1);
    }
}

/**
 * @brief Calculates and prints the factorial of an integer
 *  NOTE: If the integer is negative the function prints "The factorial of 'value' does not exist."
 * @param value - the number of the factorial to be found
*/
void print_factorial(long int value)
{
    if (find_factorial(value) == 0)
    {
        printf("The factorial of %ld does not exist. \n", value);
    }
    else
    {
        printf("The factorial of %ld is: %ld \n", value, find_factorial(value));
    }
}

///TODO: Review function documentation requirements (CodeStd)
int main(int argc, char** argv) {

    // Start of unit testing

    // is_prime function testing:
    for(unsigned int i = 1; i <= 100; i++)
    {
        if (is_prime(i))
        {
            printf("%d is prime \n", i);
        }
        else
        {
            printf("%d is not prime \n", i);
        }
    }

    // print_primes function testing:
    print_primes(-2);
    print_primes(7);
    print_primes(100);

    // compute_average function testing:
    int arg[] = {0, 1, 2, 3, 4};
    printf("%f \n", compute_average(arg, sizeof(arg)/4));
    int arg1[] = {7, 83, 29, 112, 1005, 3, 69};
    printf("%f \n", compute_average(arg1, sizeof(arg1)/4));
    int arg2[] = {-23, -5, -53, -1000, -2};
    printf("%f \n", compute_average(arg2, sizeof(arg2)/4));

    // series_sum function testing:
    printf("The sum of the series from 0 to 20 is: %d \n", series_sum(0, 20));
    printf("The sum of the series from %d to %d is: %d \n", -1, 10, series_sum(-1, 10));
    printf("The sum of the series from %d to %d is: %d \n", -5, -2, series_sum(-5, -2));

    // print_addition_series_endpoints function testing:
    print_addition_series_endpoints(210);
    print_addition_series_endpoints(54);
    print_addition_series_endpoints(-54);
    print_addition_series_endpoints(-14);
    print_addition_series_endpoints(0);

    // compute_descriminate function testing:
    printf("%d \n", compute_discriminant(5, 2, 1));

    // print_quadratic_solution function testing:
    print_quadratic_solution(1, 2, 1);
    print_quadratic_solution(1, 4, 4);
    print_quadratic_solution(1, 6, 9);
    print_quadratic_solution(5, 2, 1);

    // find_factorial function testing:
    for(int i = -3; i < 5; i++)
    {
        if(find_factorial(i) == 0 && i == 0)
        {
            printf("The factorial of %d is: %ld \n", i, find_factorial(i));
        }
        else if (find_factorial(i) == 0)
        {
            printf("The factorial of %d does not exist. \n", i);
        }
        else
        {
            printf("The factorial of %d is: %ld \n", i, find_factorial(i));
        }
    }
    
    // print_factorial function testing:
    print_factorial(-2);
    print_factorial(23);
    print_factorial(0);

    return 0;
}
