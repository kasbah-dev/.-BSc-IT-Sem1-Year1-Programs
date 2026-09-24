//program to prompt user to enter details and display them
/*
Name:Brian M 
Reg NO:CT100/G/30716/26
Date:Thursday 24 September 
*/

#include<stdlib.h>

int main()
{
    float height ;//%f
    double bank_balance;//%lf
    char phone_number[10];//%s
    
    printf("enter your height in meters/centimeters:\t");
    scanf("%f",& height);
    printf("enter your bank_balance in Ksh:\t");
    scanf("%lf",& bank_balance);
    printf("enter your phone_number:\t");
    scanf("%s",&phone_number);
    
    printf("Height       : %.2fcm\n", height);
    printf("Bank Balance : KSh %.2lf\n", bank_balance);
    printf("Phone Number : %s\n", phone_number);
    return 0 ;
}