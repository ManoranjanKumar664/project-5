import java.util.*;

public class file02
{
    public static void main(String []args)
    {
       int a;
       Scanner p=new Scanner(System.in);
       System.out.println("enter the size of the array");
       a=p.nextInt();
        int arr[]=new int[a];
        Scanner s=new Scanner(System.in);
        System.out.println("enter the elements:");
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=s.nextInt();
        }
        System.out.println("elements are:");
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
    }
}