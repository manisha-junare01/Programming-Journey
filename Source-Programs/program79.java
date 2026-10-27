import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0;
        while(0 != iNo)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
        iNo++;
    }
}

class program79
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        DigitX dobj = new DigitX();

        int iValue  =0;
        
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        dobj.DisplayDigits(iValue);

    }
}