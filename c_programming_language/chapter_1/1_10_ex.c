/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description : Write a program to to copy its input to its output , replacing
              each tab by \t , each backspace by \b and each backlash by \\.
*/

#include <stdio.h>

#include <stdio.h>

int main()
{
    int c, d;

    while ( (c=getchar()) != EOF) {
        d = 0;
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            d = 1;
        }
        if (d == 0)
            putchar(c);        
    }
    return 0;
}
