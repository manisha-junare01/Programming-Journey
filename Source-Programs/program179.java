//input 7
//output    a   b   c   d   e   f   g

public class program179
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'a';
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           System.out.print(ch+"\t");
           ch++;
        }            
        
    }
  
    public static void main(String args[])
    {
       
       int iNo = 7;
       Display(iNo);
           
    }    
}
