// Type 3
import java.util.Scanner;

class NumberX 
{
    public void displayFactor(int iNo)
    {
      int iCnt = 0;

      for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
      {
        if(iCnt % iNo == 0)
        {
            System.out.println(iCnt);

        }

      }
    }
}
        
class program47
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        NumberX nobj = new NumberX();
        nobj.displayFactor(iValue);

        
}
    
}    

//Time Complaxity : O(n/2)
// where N >= 0
