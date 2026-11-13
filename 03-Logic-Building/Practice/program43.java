// Type 2
import java.util.Scanner;

class program42
{
    public static boolean checkDivisible(int iNo)
    {
        if((iNo%3==0)&&(iNo%5==0))
        {
            return true;
        }
        else
        {
            return false;
        }    
    
    }


    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

         bRet = checkDivisible(iValue); 
        
       if(bRet==true)
       {
        System.out.println("Number is Divisible by 3 and 5");
       }
       else
       {
        System.out.println("Number is not Divisible by 3 and 5");
       }
}
    
}    

