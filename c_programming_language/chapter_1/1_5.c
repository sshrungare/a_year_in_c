/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to display farhenight to celcius in reverse order of 300 to 0  
              using for loop 
*/

#include <stdio.h>

main()
{
    float fahr;
    //fahr = 0.0;

    for(fahr = 300 ; fahr >= 0.0 ; fahr = fahr - 20)
    {
        printf("%3.0f \t %6.1f \n",fahr,(5.0/9.0) * (fahr - 32.0) );
    } 

}