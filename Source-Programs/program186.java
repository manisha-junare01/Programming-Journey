//input 7
//output   A       2       C       4       E       6       G

public class program186
{

    public static void Display(int iNo)
    {
        int iCnt = 0;
        char ch = '\0';
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {
           if(iCnt % 2 == 0 )
            {
                System.out.print(iCnt+"\t");                
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
