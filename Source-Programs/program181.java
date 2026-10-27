//input 7
//output    a   b   c   d   e   f   g

public class program181
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 97; iCnt <= iNo; iCnt++,ch++)
        {
           System.out.print(ch+"\t");
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 7;
       Display(iNo);
           
    }    
}
