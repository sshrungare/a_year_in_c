#include <stdio.h>
#include <stdlib.h>

void f1(char* p );
void f2(unsigned char* p);

void f3(short* p );
void f4(unsigned short* p);

void f5( int* p);
void f5( unsigned int* p);

void f7(long* p );
void f8(unsigned long* p );

void f9(long long* p);
void f10(unsigned long long* p);

void f11(float*  p);
void f12(double* p);

int main(void)
{
    char c = 'S';
    unsigned char uc1 = '100';

    short sn = -200;
    unsigned short usn = 500;
    
    int n = -232322;
    unsigned int un = 221313;

    long lng_n = -2131231212;
    unsigned long ulng_n = 23213123212131;

    long long ll_n = -1212;
    unsigned long long ull_n = 21321321;

    float fl1 = -2.123;
    double d1 = 3.4444;

    puts(" Before call ");
    printf("c = %c , uc1 = %hhu , sn =%hd , usn = %hu , n = %d ,un = %u , lng_n  = %ld , ulng_n = %lu\n",
      c , uc1 , sn , usn ,n , un , lng_n , ulng_n  );

    printf("lng_lng_n = %lld , u_lng_lng_n = %llu , fl1 = %f , d1 = %lf \n", ll_n, ull_n,fl1,d1);  

    f1(&c);
    f2( )

}




