import java.util.*;
import java.lang.ArithmeticException;

public class file06
{
    public static void main(String []args)
    {
        int com=0, prim=0;
        int go[]=new int[]{49, 50, 51,40,80};
        for(int i=0;i<go.length;i++)
        {
            System.out.println(go[i]);
        }
        for(int i=0;i<go.length;i++)
        {
            try{
            for(int j=2;j<go[i]/2;j++)
            {
                if(go[i]%j==0)
                {
                    com++;
                    System.out.println("composite no"+go[i]);
                    break;
                }
                else
                {
                    System.out.println("prime no."+go[i]);
                    prim++;
                    break;
                }
            }
            }
            catch(ArithmeticException e)
            {
                System.out.println(e.getMessage());
            }
        }
    System.out.println(com);
    System.out.println(prim);
    }
}