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
/////////Livingston Test code starts here///////

#include <string.h>
#include <math.h>

int is_prime_test(int arg, bool expected, const char desc[]){
    int ret_val = 0;
    char test_result[10] = {0};
    /////////////
    bool result = is_prime(arg);
    printf("%s:\n\tis_prime(%d)->(%d) : ", desc, arg, result);
    /////////////
    if (result == expected) {
        strncpy(test_result, "passed.",sizeof(test_result));
    } else {
        strncpy(test_result, "FAILED!",sizeof(test_result));
        ret_val = 1;
    }
    printf("%s\n", test_result);
    if (ret_val == 1){
        printf("\tExpected Value: %d\n", expected);
    }
    return ret_val;

}

int compute_average_test(int argarr[], int argsize, double expected, const char desc[]){
    int ret_val = 0;
    char test_result[50] = {0};
    /////////////
    double result = compute_average(argarr, argsize);
    printf("%s:\n\tcompute_average({%d -> %d},%d)->(%lf) : ", desc, argarr[0], argarr[argsize-1], argsize, result);
    /////////////
    if (fabs(result - expected) < 0.00000001) {
        strncpy(test_result, "passed.",sizeof(test_result));
    } else {
        strncpy(test_result, "FAILED!",sizeof(test_result));
        ret_val = 1;
    }
    printf("%s\n", test_result);
    if (ret_val == 1) {
        printf("\tExpected Value: %lf\n", expected);
    }
    return ret_val;
}

int series_sum_test(int argmin, int argmax, int expected, const char desc[]){
    int ret_val = 0;
    char test_result[50] = {0};
    /////////////
    int result = series_sum(argmin, argmax);
    printf("%s:\n\tseries_sum(%d,%d)->%d) : ", desc, argmin, argmax, result);
    /////////////
    if (result == expected) {
        strncpy(test_result, "passed.",sizeof(test_result));
    } else {
        strncpy(test_result, "FAILED!",sizeof(test_result));
        ret_val = 1;
    }
    printf("%s\n", test_result);
    if (ret_val == 1) {
        printf("\tExpected Value: %d\n", expected);
    }
    return ret_val;
}

int compute_disc_test(int arga, int argb, int argc, int expected, const char desc[]){
    int ret_val = 0;
    char test_result[50] = {0};
    /////////////
    int result = compute_discriminant(arga, argb,argc);
    printf("%s:\n\tcompute_discriminant(%d,%d,%d)->(%d) : ", desc, arga, argb, argc, result);
    /////////////
    if (result == expected) {
        strncpy(test_result, "passed.",sizeof(test_result));
    } else {
        strncpy(test_result, "FAILED!",sizeof(test_result));
        ret_val = 1;
    }
    printf("%s\n", test_result);
    if (ret_val == 1) {
        printf("\tExpected Value: %d\n", expected);
    }
    return ret_val;
}


int main(int argc, char* argv[]) {

    int is_prime_test_failed = 0;
    printf("///IS PRIME TESTS///\n");
    is_prime_test_failed += is_prime_test(-1,false,"Neg Not Prime Test");
    is_prime_test_failed += is_prime_test(0,false,"0 Not Prime Test");
    is_prime_test_failed += is_prime_test(1,false,"1 Not Prime Test");
    is_prime_test_failed += is_prime_test(2,true,"2 Prime Test");
    is_prime_test_failed += is_prime_test(7, true, "7 Prime Test");
    is_prime_test_failed += is_prime_test( 15, false, "15 Not Prime Test");
    printf("Total Failed: %d\n", is_prime_test_failed);
    printf("\n\n");

    printf("///PRINT PRIME TESTS///\n");
    printf("Expecting: (2,3,5,7,11,13,17,19)\n");
    printf("Actual Output: \n");
    print_primes(20);
    printf("\n\n");

    int compute_average_test_failed = 0;
    printf("///COMPUTE AVG TESTS///\n");
    int test_int_res[3] = {1,2,3};
    compute_average_test_failed += compute_average_test(test_int_res,3,2,"Int Result Avg Test");
    int test_zero[1] = {0};
    compute_average_test_failed += compute_average_test(test_zero,1,0.0,"Zero Arr Avg Test");
    int test_frac_res[3] = {-1, 3, -6};
    compute_average_test_failed += compute_average_test(test_frac_res, 3,-1.333333333333333,"Int Result Avg Test");
    printf("Total Failed: %d\n", compute_average_test_failed);
    printf("\n\n");

    int series_sum_test_failed = 0;
    printf("///SERIES SUM TESTS///\n");
    series_sum_test_failed += series_sum_test(0,7, 28, "Pos Sum Test");
    series_sum_test_failed += series_sum_test(-2,2, 0, "Neg Sum Test");
    series_sum_test_failed += series_sum_test(2,2, 2, "One Value Test");
    printf("Total Failed: %d\n", series_sum_test_failed);
    printf("\n\n");

    printf("///PRINT SERIES ENDPOINTS TEST///\n");
    printf("2:None\n");
    print_addition_series_endpoints(2);
    printf("3: 1->2\n");
    print_addition_series_endpoints(3);
    printf("9: 2->4, 4->5\n");
    print_addition_series_endpoints(9);
    printf("15: 1->5, 4->6, 7->8\n");
    print_addition_series_endpoints(15);
    printf("\n\n");

    int compute_disc_test_failed = 0;
    printf("///COMPUTE DISC TESTS///\n");
    compute_disc_test_failed += compute_disc_test(1,2,3, -8, "Neg Disc Test");
    compute_disc_test_failed += compute_disc_test(-1,5,3, 37, "Pos Disc Test");
    compute_disc_test_failed += compute_disc_test(1,2,1, 0, "Zero Disc Test");
    printf("Total Failed: %d\n", compute_disc_test_failed);
    printf("\n\n");

    printf("///PRINT QUADRATIC TESTS///\n");
    printf("not a quadratic->\n\t");
    print_quadratic_solution(0,2,3);
    printf("no real solution->\n\t");
    print_quadratic_solution(1,2,3);
    printf("-0.541381 5.541381->\n\t");
    print_quadratic_solution(-1,5,3);
    printf("-1.000000\n\t");
    print_quadratic_solution(1,2,1);

    return 0;

}
