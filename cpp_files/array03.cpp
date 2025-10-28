#include<iostream>
using namespace std;

int main()
{
    int a[5], pos=0, neg=0;
    cout<<"enter any 5 elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
       if(a[i]>0)
       {
        pos++;
       }
       else
       {
        neg++;
       }
    }
    
    cout<<"no. of positive no="<<pos<<endl;
    cout<<"no of negative no="<<neg<<endl;
    return 0;
}