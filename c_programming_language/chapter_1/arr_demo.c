/*
Author : Swapnil Shrungare
Date : 18 Jan 2023
Description : Write a program to count digits , white space and others
*/

#include <stdio.h>

main()
{
    int c, i , nwhite, nother ;
    int ndigit[10];

    nwhite = nother = 0;
    for(i = 0; i < 10; ++i)
        ndigit[i] =0;
    
    while((c = getchar()) != EOF)
        if( c >= '0' && c<= '9')
            ++ndigit[c-'0'];
 
        else if (c == ' ' || c == '\n' || c == '\t' )
            ++nwhite;
        else
            ++nother;
        
    printf("digit = ");
    for(i = 0; i < 10 ; ++i)
        printf(" %d", ndigit[i]);
    printf(" , white space = %d , nother = %d\n", nwhite , nother);

}