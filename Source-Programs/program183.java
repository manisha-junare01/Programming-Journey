//input 7
//output    a   b   c   d   e   f   g

public class program183
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {
           System.out.print(ch+"\t");
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 26;
       Display(iNo);
           
    }    
}
