import java.util.*;

public class forone03
{
    public static void main(String []args)
    {
        int sum=0;
        int a[]=new int[];
        Scanner mano=new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
            a[i]=mano.nextInt();
        }
        for(int b:a)
        {
            sum=sum+b;
        }
        System.out.println("sum of all number="+sum);

 //code to add the elements of an array using for loop
        int sum_again=0;
        for(int i=0;i<a.length;i++)
        {
            sum_again=sum_again+a[i];
        }
        System.out.println("sum of all number="+sum_again);
    }
}