////////////////////////////////////////////////////////////////////////
//
// file name : program2.c
// description : used to calulate percentage
// author : suraj shivaji panmand
// date : 28/04/2025
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int Total = 400;
    int obtained = 323;
    float percentage = 0.0f;

    percentage = ((float)obtained / (float)Total) * 100;
    printf("percentage is : %.2f%%\n",percentage);





    return 0;
}
