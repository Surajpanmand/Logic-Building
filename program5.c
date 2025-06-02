////////////////////////////////////////////////////////////////////////
//
// file name : program2.c
// description : used to calulate percentage
// author : suraj shivaji panmand
// date : 28/04/2025
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
    return fPercentageValue;
}

int main()
{
    int iTotal = 0;
    int iObtained = 0;
    float fPercentage = 0.0f;

    printf("enter your total marks : \n");
    scanf("%d",&iTotal);

    printf("enter your obtained marks : \n");
    scanf("%d",&iObtained);

    //fPercentageValue = ((float)iObtainedMarks / (float)iTotalMarks) * 100

    fPercentage = CalculatePercentage(iTotal,iObtained);

    printf("Percentage is : %.2f%%\n",fPercentage);

    return 0;
}
    

    