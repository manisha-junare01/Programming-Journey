// Type 2
import java.util.Scanner;

class NumberX //jr number cha class inbuilt asla tr x ghayacha inbuilt mdhe kuthch nste x last so 
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
}     
class program44
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

         bRet = NumberX.checkDivisible(iValue); 
        
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

