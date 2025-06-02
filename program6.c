/*
   start
       accept percentage from user
          if percentage is less than 0 and greter then 100
              display an invlid input
          if percentage is greter then 0 and less then 35
              display as fail
          if percentage is greter then 50 and less then 60
              display as pass class
          if percentage is greter then 0 and less then 35
              display as first class
        
        
*/

#include<stdio.h>

void DisplayClass(float fPerc)
{
    if((fPerc < 0.0f) ||  (fPerc >100.0f))
    {
        printf("unable to proceed as input is invlid\n");
        return;
    }

    if((fPerc >= 0.0f) && (fPerc < 35.0F))
    {
        printf("you are fail\n"); 
    }
     else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("pass class\n");
    }
    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("second class\n");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("first class\n");
    }
    else if((fPerc >= 70.0f) && (fPerc < 100.0f))
    {
        printf("first class with distinction\n");
    }
}
int main()
{
    float fValue = 0.0f;

    printf("enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;

}