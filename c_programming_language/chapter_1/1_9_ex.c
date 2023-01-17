/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to return input to output by replacing string of spaces with single space
*/

#include <stdio.h>

main()
{
    int prev_c , c;
    c = 0 ;
    prev_c = 0 ;  
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || prev_c != ' ')
        {
           putchar(c);
           prev_c = c; 
        }

    }
}