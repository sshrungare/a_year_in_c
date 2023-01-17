/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to count characters in input
*/

#include <stdio.h>

main()
{
    long nc ;
    nc = 0 ;
    while (getchar() != EOF)
    {   
                ++nc;
    }
    printf("Total number of characters in input : %ld \n", nc);
     
}

