#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = { 100,200,300,400,500 };
    int i, n ; 
    int (*p_arr)[5];

    puts("Print Array using its name");
    for(i = 0;i<5;i++)
    {
        printf("A[%d] : %d   \n",i , A[i]);
    }

    puts ("Print Array usint its pointer");
    p_arr = &A;
    for (i=0;i<5;i++)
    {   
        n = (*p_arr)[i];
        printf(" n = %d\n", n);
    }

}