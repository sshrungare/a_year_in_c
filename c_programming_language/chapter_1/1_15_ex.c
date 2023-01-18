/*
@Author : Swapnil Shrungare
@Date : 18 Jan 2023
@Description : This Program calculates farehenight and celcius and outputs a table  using a function 
*/

#include <stdio.h>

int fahr_to_celcius(float fahr);


int main(void)
{
    int lower , upper , step ;
    float fahr , celsius ;

    lower = fahr =  0;
    upper =300;
    step = 20; 

    while (fahr < upper)
    {
        celsius = fahr_to_celcius(fahr);
        printf("%3.0f\t%6.2f\n", celsius , fahr);
        fahr += step; 
    }

    return(0);
}

int fahr_to_celcius(float fahr)
{
    int celcius ; 
    celcius = (5.0/ 9.0) * (fahr-32) ; 
    return celcius;
}
 