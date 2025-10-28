import java.util.*;

public class file03
{
    public static void main(String []args)
    {
        int pos=0, neg=0;
        int ref[]=new int[5];
        Scanner mano=new Scanner(System.in);
        System.out.println("enter the elements:");
        for(int i=0;i<ref.length;i++)
        {
            ref[i]=mano.nextInt();
        }
        for(int i=0;i<ref.length;i++)
        {
            if(ref[i]>0)
            {
              pos++;
            }
            else 
            {
                neg++;
            }
        }

        System.out.println("no of positive no="+pos);
        System.out.println("no of negative no="+neg);
        
    }
}