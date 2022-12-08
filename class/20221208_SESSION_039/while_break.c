/*
@Author : Swapnil Shrungare
@Date : 8th Dec 2022 
@Goal : Demo Break Statement
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int num1;
    int i;
    i = 1;

    printf("How many times you want run this loop : \n");
    scanf("%d", &num1);

    while(i<=num1)
    {
        if (i == 3)
        {
            break;
        }

        printf("Now at %d \n", i);
        i = i + 1;
    }

    return (0);
}