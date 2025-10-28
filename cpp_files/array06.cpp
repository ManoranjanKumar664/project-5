#include<iostream>
using namespace std;

int main()
{
    int a[5], total=0;
    float avg;
    cout<<"enter any 5 elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
        total=total+a[i];
    }
    cout<<"total="<<total<<endl;
    for(int i=0;i<5;i++)
    {
        avg=(total*0.5);
    }
    cout<<"average="<<avg;
    return 0;
}