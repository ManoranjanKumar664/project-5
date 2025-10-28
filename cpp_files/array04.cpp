#include<iostream>
using namespace std;

int main()
{
    int a[5], even=0, odd=0;
    cout<<"enter any 5 elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"no. of even no="<<even<<endl;
    cout<<"no. of odd no="<<odd;
    return 0;
}