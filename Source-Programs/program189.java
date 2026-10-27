//input     4
//output    *       *       *       *
  //        *       *       *       *
public class program189
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           System.out.print("*\t");
        }
        System.out.println();
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           System.out.print("*\t");
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 4;
       Display(iNo);
           
    }    
}
