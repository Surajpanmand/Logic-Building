 import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program60
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        nobj.DisplayFactors(iValue);
    }
}