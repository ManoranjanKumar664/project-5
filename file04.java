import java.util.*;

public class file04
{
    public static void main(String []args)
    {
        int no_of_even=0, no_of_odd=0;
        int store_ref[]=new int[5];
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the elements");
        for(int i=0;i<store_ref.length;i++)
        {
            store_ref[i]=sc.nextInt();
        }
        for(int i=0;i<store_ref.length;i++)
        {
            if(store_ref[i]%2==0)
            {
                no_of_even++;
            }
            else 
            {
                no_of_odd++;
            }
        }
        System.out.println("no of odd="+no_of_odd);
        System.out.println("no of even"+no_of_even);

    }
}