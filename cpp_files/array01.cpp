#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"enter any 5 elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=a[i]+2;
        }
        else
        {
            a[i]=a[i]+5;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<"elements are:"<<a[i]<<endl;
    }
    return 0;
}