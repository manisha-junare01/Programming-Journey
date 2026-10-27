import java.util.*;

class DigitX
{
    public boolean CheckPalyndrom(int iNo)//reverse no is same
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;
        iTemp = iNo;
        while(0 != iNo)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
            
        }
        if(iTemp==iRev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}  

class program93
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue  =0;
        boolean bRet = false;//false karan to 0 ahe
       
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        bRet = dobj.CheckPalyndrom(iValue);
        
        if(bRet==true)
        {
            System.out.println("Number is palyndrom...");
        }

        else
        {
            System.out.println("Number is not palyndrom...");
        }

    }
}