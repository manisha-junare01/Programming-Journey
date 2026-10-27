class ArrayX
{
      public void Update(int Arr[])
    {
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt]++;
        }
    }

}
public class program147
{
  
    public static void main(String args[])
    {
        int Brr[] = {10, 20, 30, 40, 50};

        System.out.println("Array elements before Function call :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
       
        ArrayX aobj = new ArrayX();
       aobj. Update(Brr);

        System.out.println("Array elements after Function call :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }

    
}
