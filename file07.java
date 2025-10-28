import java.lang.ArithmeticException;

public class file07
{
    public static void main(String []args) throws ArithmeticException
    {
        int a=20, com=0;
        for(int i=2;i<a/2;i++)
        {
          if(a%i==0)
          {
            com++;
          }
        }
        System.out.println("no="+com);
        if(com==0)
        {
            System.out.println("no is prime");
        }
        else
        {
            System.out.println("no  is composite");
        }
    }
}