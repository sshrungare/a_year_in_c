/*
@Author : Swapnil Shrungare
@Goal : Create A length convertor console Application
@Date : th Dec 2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define NR_MAX_TRIES   3

#define TRUE    1 
#define FALSE   0
#define SUCCESS 1
#define FAILURE 0
#define MILIMETER   1
#define CENTIMETER  2
#define METER   3
#define KILOMETER   4
#define INCH    5
#define FOOT    6
#define YARD    7
#define MILE    8
#define EXIT_APP    9
  
double milimeter_to_centimeter(double);
double millimeter_to_meter(double);
double millimeter_to_kilometer(double);
double milimeter_to_inch(double);
double milimeter_to_foot(double);
double milimeter_to_yard(double);
double milimeter_to_mile(double);

double centimieter_to_milimeter(double);
double meter_to_milimeter(double);
double kilometer_to_milimeter(double);
double inch_to_milimeter(double);
double foot_to_milimeter(double);
double yard_to_milimeter(double);
double mile_to_milimeter(double);

void do_conversion(int from_choice, int to_choice , double input_number);
int get_choice (const char* prompt , int valid_response_start , int valid_response_end);
void exit_application(void);

int main(void)
{
    int from_choice;
    int to_choice;
    double input_number = 0.0;
    while (TRUE)
    {
        puts ("---------------------------------------------------------------------");
        printf("1:Milimeter(mm)\n2:CentiMeter(cm)\n3:Meter(m)\n4:Kilometer(km)\n");
        printf("5:Inch(in)\n6:Foot(ft)\n7:Tard(yd)\n8:Mile(mi)\n9:Exit\n");
        from_choice = get_choice("CONVERT TO : ",1,9);
        if(from_choice == EXIT_APP)
        {
            exit_application();
        }
        printf("Enter Magnitude: ");
    }
 exit(0);
}
