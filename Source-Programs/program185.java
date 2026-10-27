//input 7
//output   A       *       C       *       E       *       G

public class program185
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {
           if(iCnt % 2 == 0 )
            {
                System.out.print("*\t");                
            }
            else
            {
                System.out.print(ch+"\t");
                          }
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 7;
       Display(iNo);
           
    }    
}
