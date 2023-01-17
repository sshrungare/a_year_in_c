/*
Author : Swapnil Shrungare
Date : 17 Jan 2023
Description :  add header to temp converter program
*/

#include <stdio.h>


main()
{
    float fahr, celcius;
    int upper , lower , step ;

    lower = 0;
    upper = 200;
    step = 20;

    fahr = lower;
    puts("==========================");
    puts("|temp(fh) | temp(celcius)|");
    puts("==========================");
    while (fahr <= upper)
    {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("| %7.0f | %6.2f       |\n",fahr,celcius);
        fahr = fahr + step;
    }
    puts("==========================");
}