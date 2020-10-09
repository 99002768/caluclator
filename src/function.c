#include<function.h>
#include<stdio.h>
#include<math.h>

int do_add(int input1,int input2)
{
    int result = input1+input2;
    return result;
}

int do_subtract(int input1,int input2)
{
    int result = input1-input2;
    return result;
}


int do_multiply(int input1,int input2)
{
    int result = input1*input2;
    return result;
}

int do_divide(int input1,int input2)
{
    int result = input1/input2;
    return result;
}

double do_squareroot(double triginput)
{
    double result = sqrt(triginput);
    return result;
}

int do_modulus(int input1,int input2)
{
    int result = input1 % input2;
    return result;
}

int do_fact(int input1)
{
    int i,fact =1;
    if (input1 < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= input1; ++i) {
            fact *= i;
        }
        return fact;
    }
}

double do_cosine(double triginput)
{
    double result = cos(triginput);
    return result;
    
}


