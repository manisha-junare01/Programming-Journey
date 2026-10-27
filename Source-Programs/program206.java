/*
iRew = 4 
iCol = 4

a  b  c  d  
1  2  3  4  
a  b  c  d  
1  2  3  4  

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i =0;
        int j = 0;
         char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            if(i % 2 != 0)
            {
                for(j = 1,ch = 'a'; j <= iCol; j++,ch++)
                {
                    System.out.print(ch+"  "  );
                }
                
            }
            else
            {
                for(j = 1; j <= iCol; j++)
                {
                    System.out.print(j+"  "  );
                }
            }
            System.out.println();
        }
                
    }
}

class program206
{
    public static void main(String A[])
        {
            Scanner sobj = new Scanner(System.in);
            int iValue1 = 0;
            int iValue2 = 0;
           
            System.out.println("Enter No of Rows : ");
            iValue1 = sobj.nextInt();

            System.out.println("Enter No of Column : ");
            iValue2 = sobj.nextInt();

            Pattern pobj = new Pattern();
            
            pobj.Display(iValue1, iValue2);   

        }
    
}