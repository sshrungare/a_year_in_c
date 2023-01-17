/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to display farhenight to celcius in reverse order of 300 to 0  
              using for loop and using symboling constant
*/

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

main()
{
    float fahr;

    for(fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP )
    {
        printf("%3.0f \t %6.2f \n", fahr, (5.0/9.0) * (fahr - 32.0));
    }

}