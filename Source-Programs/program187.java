//input 7
//output   A       b       C       d       E       f       G

public class program187
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0',ch2 = '\0';
        for(iCnt = 1, ch = 'A',ch2 = 'a'; iCnt <= iNo; iCnt++,ch++,ch2++)
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
       
       int iNo = 7;
       Display(iNo);
           
    }    
}
