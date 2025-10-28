public class file05
{
    public static void main(String []args)
    {
        int s_ref[]=new int[]{59,50,60,49,79};
        for(int i=0;i<s_ref.length;i++)
        {
            System.out.println("element is:"+s_ref[i]);
        }
        int max=s_ref[0];
        for(int i=1;i<s_ref.length;i++)
        {
            if(s_ref[i]>max)
            {
                max=s_ref[i];
            }
        }
     System.out.println("maximum value from the array="+max);
    }
}