/*
    @Author : Swapnil Shrungare
    @Goal   : Find max of given 2 integers
    @Date   : 22 Nov 2022
*/

/*Declaration*/
int find_max (int n1, int n2);

/*Definiation*/
int find_max(int n1 , int n2)
{
    int max_number;

    if (n1 >n2)
        max_number = n1; 
    else 
        max_number = n2;
    
    return (max_number);   
}

int main(void)
{   
    int max ;
    max = find_max(1,2);
    printf("max of %d and %d is %d",1,2,max);
    return (0);
}