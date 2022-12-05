/*
@Author : Swapnil Shrungare
@Goal : To Demonstrate Liner flow of a programe
@Date : 30th Nov
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1 = 100;
    int n2 = 200;
    int sum, sub, mul, quotient, remainder;

    sum = n1 + n2;
    printf("Sum is %d\n", sum);
    sub = n1 - n2;
    printf("sub is %d\n", sub);
    mul = n1  * n2;
    printf("mul is %d\n", mul);
    quotient = n1 / n2;
    printf("quotient is %d\n", quotient);
    remainder = n1 % n2;
    printf("remainder is %d\n", remainder);

    exit(0);
}