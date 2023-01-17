/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to read a character from input and output it to screen
*/


#include <stdio.h>

main()
{
    int c = 0;
    c = getchar();
    do 
    {
        putchar(c);
        printf("%s\n", c);

        c = getchar();
    }while (c != EOF);
}
