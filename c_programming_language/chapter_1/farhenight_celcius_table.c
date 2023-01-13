/*
@Author : Swapnil Shrungare
@Date : 13 Jan 2023
@Description : This Program calculates farehenight and celcius and outputs a table  
*/

#include <stdio.h>

main()
{
    int fahr , celsius ;
    int lower, upper ,step;
    int demo ; 
    /*
    demo = 2147483648; 2147483647 is max in 32 bit so next value will be -2147483647
    printf("%d\n",demo);
    */
    lower = 0;  /*lower limit of temperature table*/
    upper = 300; /*upper limit*/
    step = 20; /* step size */

    fahr = lower; 
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;  
        printf("%d\t%d\n", fahr , celsius);
        fahr = fahr + step ; 
    }
}