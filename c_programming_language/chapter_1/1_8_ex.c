/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to count lines , tab and blanks 
*/


#include <stdio.h>


main()
{
    int c , nl , t ,bl;
    nl = 0;
    t = 0;
    bl =0; 
    while ((c = getchar()) != EOF)
    {   
        if (c == '\n')
        {
            ++nl;
        }
        else if (c=='\t')
        {
            ++t;
        }
        else if (c == ' ')
        {
            ++bl;
        }
        
        
    }
    printf("\nTotal number of lines : %d \n \
            Total number of tabs : %d \n \
            Total number of spaces : %d \n ",nl, t, bl);
    
}