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
    int Total = 0;
    int obtained = 0;
    float percentage = 0.0f;

    printf("enter your total marks : \n");
    scanf("%d",&Total);

    printf("enter your obtained marks : \n");
    scanf("%d",&obtained);

    percentage = ((float)obtained / (float)Total) * 100;

    printf("percentage is : %.2f%%\n",percentage);





    return 0;
}
