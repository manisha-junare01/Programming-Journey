import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
           Arr[i] = Arr[i] -32;//Error
        }
        
        return new String(Arr); //Annonimus 
    }
}

class program281
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX(); 
        String sRet = null;

        sRet = strobj.ToUpperX(data);
        System.out.println("  "+sRet);        
    }    
}