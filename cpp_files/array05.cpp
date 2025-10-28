#include<iostream>
using namespace std;

int main()
{
    int a[5], min;
    cout<<"enter any 5 elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"maximum no="<<min;
    return 0;
}