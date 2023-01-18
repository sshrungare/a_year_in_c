/*
Author : Swapnil Shrungare
Date : 18 Jan 2023
Description : Write a program to to count  lines , words and characters from given input.
*/

#include <stdio.h>

#define IN 1 //Inside a word
#define OUT 0 // Outside a word

main()
{
    int c, nl, nw, nc, state;
    state = OUT;   
    nl = nw = nc = 0; 

    while((c = getchar()) != EOF)
    {
        ++nc; // Increment number of characters
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c =='\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN ;
            ++nw;
        }
        
    }
    printf("number of lines = %d \n \
            number of words = %d \n \
            number of characters = %d \n \
     ", nl , nw , nc);
}