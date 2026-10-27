// Type 1
import java.util.Scanner;

class program143

{
    public static int Summation(int Arr[])
    {
       
        int iCnt = 0;
        int iSum = 0;
        
        for(iCnt =0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
}



    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0, iLength = 0;

        System.out.println("Enter Number of elements : ");
        iLength = sobj.nextInt();

        System.out.println("elements of array : ");

        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
                        
        }



        // if((iValue%3==0)&&(iValue%5==0))
        // {
        //     System.out.println("Number is Divesible by 3 and 5 ");
        // }
        // else
        // {
        //     System.out.println("Number is Not divisible by 3& 5..");
        // }

        int iRet = Summation(Brr);

        System.out.println("Summation is : "+iRet);
        Brr = null;
        System.gc();
        
    }
}
