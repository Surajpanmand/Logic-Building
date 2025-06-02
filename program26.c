#include<stdio.h>

int CheckFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CheckFactorial(iValue);

    printf("Factorial is: %d",iRet);





    return 0;
}