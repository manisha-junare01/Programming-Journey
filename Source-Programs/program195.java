//input     4  4
/*
*       *       *       *
$       $       $       $
*       *       *       *
$       $       $       $
 */

import java.util.Scanner;

public class program195
{

    public static void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        for(i = 1; i <= iRow; i++)
        {
         for(j = 1; j <= iCol; j++)
        {
            if(i%2!=0)
            {
                System.out.print("*\t");

            }
            else
            {
                System.out.print("$\t");
            }
           
        }  
         System.out.println(); 
           
        }
       
    }
  
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int i1, i2;

        System.out.println("Enter no of rows : ");
        i1 = sobj.nextInt();

        System.out.println("Enter no of Column : ");
        i2 = sobj.nextInt();

       Display(i1,i2);
           
    }    
}
