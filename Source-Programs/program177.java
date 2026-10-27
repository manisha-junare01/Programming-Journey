//input 7
//output 1       *       2      *       3     *      4

public class program177
{

    public static void Display(int iNo)
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 1, iCount = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0 )
            {
                System.out.print("*\t");
                
            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 7;
       Display(iNo);
           
    }

    
}
