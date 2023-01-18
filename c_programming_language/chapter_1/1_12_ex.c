/*
Author : Swapnil Shrungare
Date : 18 Jan 2023
Description : Write a program that prints its input one word per line
*/

#include <stdio.h>

 

int main(void)
{
    int c ;
 

    while((c=getchar()) != EOF)
    {   
        if (c == '\n' || c == ' ' || c == '\t')
            putchar('\n');
        
        else  
            putchar(c);
          
           
    } 

    return(0);
}
