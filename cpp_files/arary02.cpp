#include<iostream>
using namespace std;

int main()
{
    int a[5];
    cout<<"enter any 5 elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int j=4;j>=0;j--)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}