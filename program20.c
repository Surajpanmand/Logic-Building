#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{ 
    bool bResult = false;
    if((iNo % 2) == 0)
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }
    return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false ;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is even",iValue);
    }
    else
    {
        printf("%d is odd",iValue);
    }
    return 0;
}