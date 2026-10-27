import java.util.*;

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;

        System.out.println("Enter string : ");
        Arr = sobj.nextLine();

        System.out.println(Arr[0]);  //error
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
    }

}

/*r: array required, but String found
        System.out.println(Arr[0]);
                              ^
program261.java:14: error: array required, but String found
        System.out.println(Arr[1]);
                              ^
program261.java:15: error: array required, but String found
        System.out.println(Arr[2]);
                              ^
3 errors */