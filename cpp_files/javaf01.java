import java.util.Scanner;

public class javaf01
{
    public static void main(String []args)
    {
        String a="hello world";
        String x=new String("manoranjan");
        System.out.println(x);
        System.out.println(a);
        int number[]=new int[5];
        Scanner s1=new Scanner(System.in);
        System.out.println("enter any 5 number");
        for(int i=0;i<5;i++)
        {
            number[i]=s1.nextInt();
        }
    }
}