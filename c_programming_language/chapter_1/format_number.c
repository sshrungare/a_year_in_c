/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Display use of 
    %d          %f          %.2f
    %6d         %6f         %6.2f

*/
#include<stdio.h>

main()
{
    int n = 2;
    float ff = 2;
    printf(" n =  %d \n", n); //prints as decimal number                            =2 
    printf(" n =  %6d \n", n);// prints as decimal number with using 6 characters   =     2
    printf(" n =  %f \n", ff);// prints floating point                              =2.000000  
    printf(" n =  %10f \n", ff);//prints floating points with 10 char spaces        =            2.000000
    printf(" n =  %.2f \n", ff);//prints floats with 2 char after decimal places    =2.00
    printf(" n =  %6.2f \n", ff);//prints float with 6 char wide and 2 decimal place=   2.00

}