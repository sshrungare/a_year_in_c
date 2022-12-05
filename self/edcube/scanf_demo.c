/*
@Author :  Swapnil Shrungare
@Goal : Demo of scanf 
@Date : 5th Dec 2022
*/

#include <stdio.h>
#include <stdlib.h>

int num ;

int main (void)
{
    printf("Please Enter a Number between 1 to 10 : \n");
    scanf("%d",&num);
    printf("You have entered : %d",num);

    exit(0);
}