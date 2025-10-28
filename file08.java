import java.lang.ArithmeticException;

public class file08
{
    public static void main(String []args)
    {
        int comp=0, prim=0;
        int a[]=new int[]{43, 50,8, 29, 17};
        //System.out.println("length of a"+a.length);
        int b[]=new int[a.length];
        //System.out.println("lenglht of b="+b.length);
        for(int i=0;i<a.length;i++)
        {
            for(int j=2;j<a[i]/2;j++)
            {
              if(a[i]%j==0)
              {
                b[i]++;
                break;
              }
            }
        }
        //int b[]=new int[]{1, 1, 0, 0, 1};
        for(int j=0;j<b.length;j++)
        {
            if(b[j]==0)
            {
                prim++;
            }
            else
            {
                comp++;
            }
        }
        System.out.println("No of prim:"+prim);
        System.out.println("no of comp:"+comp);
    }
}