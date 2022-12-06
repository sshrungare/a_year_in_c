/*
@Author : Swapnil Shrungare
@Goal : Demonstrate use of Logical operators 
@Date : 6th Dec 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1 , n2 , n3 ,n4;

    printf("Enter N1 : ");
    scanf("%d",&n1);

    printf("Enter N2 : ");
    scanf("%d",&n2);

    printf("Enter N3 : ");
    scanf("%d",&n3);

    printf("Enter N4 : ");
    scanf("%d",&n4);

    if ((n1 > n2) && (n3 < n4))
    {
        printf("%d is greater than %d and %d is Less Than %d\n", n1,n2,n3,n4);
    }

    if ((n1 > n2) || (n3 < n4))
    {
        printf("%d is greater than %d and %d is Less Than %d or BOTH\n", n1,n2,n3,n4);
    }

    if (!(n1 == n2))
    {
        printf("%d is not equal to %d \n", n1,n2,n3,n4);
    }
    
    

    exit(0);
}