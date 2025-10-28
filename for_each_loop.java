import java.util.Scanner;

class for_each_loop
{
    public static void main(String []args)
    {
     
        int b[]=new int[]{13, 23, 49, 50};
       // System.out.println(b.length);
        int store[]=new int[b.length];
       // System.out.println(store.length);
       // System.out.println(b.length);
       for(int receive:b)
       {
        for(int i=2;i<receive/2;i++)
        {
            if(receive%i==0)
            {
              System.out.println(receive+" is composite");
              break;
            }
        }
       }
    }
}