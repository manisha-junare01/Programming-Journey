
import java.util.Scanner;

class NumberX 
{
    public boolean CheckPerfect(int iNo)         // perfect - means no chya factor chi addion same asel original no sobat tr to perfect no asto
    {
      int iCnt = 0;
      int iSum =0;

      for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
      {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
      }
      if(iSum==iNo)
      {
        return true;
      }
      else 
      {
        
return false;
      }
    
}
        
class program50
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int bRet = 0;

        System.out.println("Enter Number : ");
        iValue=sobj.nextInt();

        NumberX nobj = new NumberX();
        bRet = nobj.CheckPerfect(iValue);

        if(bRet==true)
        {
            System.out.println("it is not perfect..."+bRet);   
        }
        else
            {
                System.out.println("it is not perfect..."+bRet); 

            }     
}
    
}  }  

//Time Complaxity : O(n/2)
// where N >= 0
 
    

