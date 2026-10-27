import java.util.*;
import Marvellous.StringX;

class program277
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String data = null;

        program280 strobj = new program280(); //Error
        int iRet = 0, iRet2 = 0;

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of Capital characters : "+iRet);
     
        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small characters : "+iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits Are : "+iRet);

        iRet = strobj.CountSpace(data);
        System.out.println("Number of Spaces : "+iRet);

        iRet = strobj.CountSpacial(data);
        System.out.println("Number of Spacial : "+iRet);
    }
    
}