#include <stdio.h>
#include <stdlib.h>


int get_integer(void);
int* get_integer_2(int init_value);
void get_integer_3(int** pp );

int main(void){

    int ret;
    int* x = 0;
    int* y = 0;

    ret = get_integer();
    puts("Get_ingeter demo");
    printf("ret = %d\n",ret);


    x = get_integer_2(344);
    puts("Get_ingeter_2 demo");
    printf("ret = %d\n",*x);
    free(x);
    x = 0; 

    printf("Pointer y before call =%p \n",y );
    get_integer_3(&y);
    printf("Pointer y after call y = %p\n ", y);
    *y = 100;
    free(y);
    y = 0;
    return (0);
}

int get_integer(void){
    return (100);
}

int* get_integer_2(int init_value)
{
    int* p = 0; 

    p = (int*)malloc(sizeof(int));

    if (p ==0 )
    {
        puts("Erro in allocating memory");
        exit(-1);
    }

    *p = init_value;
    return(p);
}

void get_integer_3(int** pp )
{   
    int* p =0;

    p = (int*)malloc(sizeof(int));
    if(p==0){
        puts ("Error Allocating memory");
        exit(-1);
    } 

    printf("p = %p \n", p );
    *pp = p;
  
}