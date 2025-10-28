#include<iostream>
using namespace std;

int main()
{
    int comp=0;
    int a[3]={49,50, 60};
   // int a[5]={49, 50,8, 29, 17};
   /* for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    } 
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                cout<<"factor is:"<<j<<endl;
            }
        }
    }
    cout<<comp;*/
    int y;
    cout<<"elemets are="<<endl;
    for(int x:a)
    {
        y=x+5;
        cout<<y<<endl;
    }
    cout<<"normal element="<<endl;
    for(int b:a)
    {
        b=b+5;
    }
    for(int m:a)
    {
        cout<<m<<endl;
    }
    return 0;
}