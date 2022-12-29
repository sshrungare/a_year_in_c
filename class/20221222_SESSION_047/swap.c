/*
@Author : Swapnil shrungare
@goal : write a swap function  
*/


#include <stdio.h>
#include <stdlib.h>

void swap( int a, int b);

void swap(int a , int b)
{
    int tmp;
    printf("Before swaping a = %d and b = %d\n", a , b );
    tmp = a ;
    a = b ;
    b = tmp;
    printf("After swaping a = %d and b = %d\n" , a ,b );    

}


int main(void)
{
    swap(2,3);
    return (0);
}