import java.util.*;

class StringX
{
    public String toUpperX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] >= 'z')
            {
                Arr[i] = (char)(Arr[i] -32);
            }           
        }
        
        return new String(Arr); //Annonimus 
    }

    public String toLowerX(String str)
    {
        int i = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] >= 'Z')
            {
                Arr[i] = (char)(Arr[i] +32);
            }           
        }
        
        return new String(Arr); //Annonimus 
    }
}

class program286
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        StringX strobj = new StringX(); 
        String sRet = null;

        sRet = strobj.ToUpperX(data);
        System.out.println(" Updated : "+sRet);
        
        sRet = strobj.ToLower(data);
        System.out.println(" Updated : "+sRet);
    }    
}