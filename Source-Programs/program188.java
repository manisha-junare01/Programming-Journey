//input 11
//output   *    *   *   #   #   #   *   *   *   #   #

public class program188
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0',ch2 = '\0';
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           if(iCnt % 2 == 0 )
            {
                System.out.print(ch2+"\t");                
            }
            else
            {
                System.out.print(ch+"\t");
            }
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 11;
       Display(iNo);
           
    }    
}
