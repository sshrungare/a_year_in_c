/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to count lines
*/


#include <stdio.h>


main()
{
    int c , nl , t , ;
    nl = 0;
    while ((c = getchar()) != EOF)
    {   
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("Total number of lines : %d \n",nl);
    
}