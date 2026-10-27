class ArrayDemo
{
    public static void main(String args[])
    {
        int Brr[] = {10, 20, 30, 40, 50};

        System.out.println("Array elements before update :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

        // Update logic
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt]++;
        }

        System.out.println("Array elements after update :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}