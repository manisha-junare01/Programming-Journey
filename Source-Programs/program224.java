/*
iRew = 6
iCol = 7

PS E:\LB\Class_Program> java program224.java
Enter No of Rows : 
5
Enter No of Column : 
5
1  
1  2  
1  2  3  
1  2  3  4  
1  2  3  4  5     
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i =0;
        int j = 0;

         if(iRow != iCol)
        {
            System.out.println("Invalid parameter...");
            System.out.println("No of rows and column sould be same...");
            return ;
        }

            
        for(i = 1; i <= iRow; i++)
        {
           
             for(j = 1; j <= i; j++)
                {
                                       
                    {
                        System.out.print(j+"  "  );
                    }
                }
            System.out.println();      
                
    }}
}

class program224
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