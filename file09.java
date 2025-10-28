import java.util.*;

public class file09
{
    public static void main(String []args)
    {
        int comp=0;
        int a[]={49, 53, 29, 23};
        for(int b:a)
        {
            for(int i=2;i<b/2;i++)
            {
                if(b%i==0)
                {
                    comp++;
                    break;
                }
            }
        }
        System.out.println(comp);
       // System.out.println("no of odd no:"+odd);
        //System.out.println("no of even no:"+even);
    }
}