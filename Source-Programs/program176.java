//input 7
//output 1       *       3       *       5       *       7

public class program176
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0 )
            {
                System.out.print("*\t");
                
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
        }

            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 7;
       Display(iNo);

            
    }

    
}
