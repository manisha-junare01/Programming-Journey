/*
PS E:\LB\Class_Program> java program226.java
Enter No of Rows : 
5
Enter No of Column : 
5
a  
b  b  
c  c  c  
d  d  d  d  
e  e  e  e  e   
   
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i =0;
        int j = 0;
        char ch = '\0';

         if(iRow != iCol)
        {
            System.out.println("Invalid parameter...");
            System.out.println("No of rows and column sould be same...");
            return ;
        }

            
        for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
        {
           
             for(j = 1; j <= i; j++)
                {
                                       
                    {
                        System.out.print(ch+"  "  );
                    }
                }
            System.out.println();      
                
    }}
}

class program226
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