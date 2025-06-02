#include<stdio.h>

#define ERR_INVALID -1

int Factroial(unsigned int iNo)

{
    int iCnt = 0;
    int ifact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        ifact = ifact * iCnt;
    }
    return ifact;
}

int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%u",&iValue);

    iRet = Factroial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("invalid");
    }
    else
    {
    printf("Factroial is %d",iRet);
    }

    return 0;
}