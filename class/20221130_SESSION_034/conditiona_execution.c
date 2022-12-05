/*
@Author : Swapnil Shrungare
@Goal : To Demonstrate If condtion 
@Date : 30th Nov 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Start of the programe \n");
    printf("Enter n: \n");
    scanf("%d", &n);
    if(n > 0)
    {
        printf("%d is positive", n);
    }
    printf("\nEnd of Programe \n");
}