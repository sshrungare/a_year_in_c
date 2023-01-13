#include <stdio.h>
#include <stdlib.h>


void test_1(int n);
void test_2(int* p);
void test_3(int* p);

int main(void){

    int m ;
    int n ; 
    int k = 2000 ;
    test_1(100);

    m=200;
    test_1(m);

    printf ("before call to test_2() n : =%d \n  ",n);
    test_2(&n);
    printf ("after call to test_2() n : =%d \n  ",n);
    
    printf ("before call to test_3() k : =%d \n  ",k);
    test_3(&k);
    printf ("after call to test_3() k : =%d \n  ",k);
    

    return(0);
}




//caller sends integer input to callee
//Callee receives copy of value sent by caller
//callee cant modify callers copy of integer  
void test_1(int n){

    printf("Received input from call := %d\n",n);
    puts("----------------------------------");
 
}

//Caller sends an adreess of its local int var to callee.While sedning caller does not put 
//any specific value in it 
//Calee function access address of int in a pointer varaible and uses that pointer to write on caller 
//local variable , tchnicaly p is input to p                                                        
void test_2(int* p){
    *p = 200;
}


void test_3(int* p){
    *p = *p * *p ;
}

