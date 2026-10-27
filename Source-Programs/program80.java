//without idigit
// 
import java.util.*;

class DigitX
{
    public void DisplayDigits(int iNo)
    {
        while(0 != iNo)
        {
            iNo = iNo % 10;
            System.out.println(iNo);
            //System.out.println(iNo%10);
            iNo = iNo / 10;
        }
        iNo++;
    }
}

class program80
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