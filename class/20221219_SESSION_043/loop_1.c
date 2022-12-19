/*
@Author : Swapnil Shrungare
@Goal : For loop demo 
@Date : 19 Dec 2022
*/

#include <stdio.h>
#include <stdlib.h>

#define  N 5 

int main(void)
{
    int i = 0; 
    int j = 0; 
    while (i<=N)
    {
        while(j <= N)
        {
            printf("(%d , %d )", i ,j);
            j++;
        }
        i++;        
    }
    return(0);
}

