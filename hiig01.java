import java.util.*;

public class hiig01
{
    public static void main(String []args)
    {
        int a[]=new int[]{49, 30, 50,40};
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
        Scanner mano=new Scanner(System.in);
        System.out.println("enter any five number");
        for(int i=0;i<5;i++)
        {
            a[i]=mano.nextInt();
        }
    }
}