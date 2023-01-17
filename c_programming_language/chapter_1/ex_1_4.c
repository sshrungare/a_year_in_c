/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to display celcius to farhenight 
*/


#include <stdio.h>

main()
{
    float fahr ,celcius ;
    int lower, upper, step; 

    lower = 0; 
    upper = 100;
    step = 1; 

    celcius = lower;
    puts("==========================");
    puts("|temp(c) | temp(f)       |");
    puts("==========================");
    while (celcius <=upper)
    {
        fahr = (9.0/5.0) * celcius + 32;
        printf("|%3.0f \t| %6.2f\t |\n",celcius,fahr);
        celcius = celcius + step;
    }
    puts("==========================");

}