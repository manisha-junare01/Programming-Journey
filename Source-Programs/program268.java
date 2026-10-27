import java.util.*;

class StringX
{
    public void Display(String str)   //non static means to call the method no need to create method
    {
        System.out.println("Received String is str : "+str);
        
    }

}

class program268
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        program280 strobj = new program280();

        System.out.println("Enter string : ");
        str = sobj.nextLine();

        strobj.Display(str);
     
    }
    
}