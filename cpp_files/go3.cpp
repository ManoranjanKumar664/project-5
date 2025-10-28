#include<iostream>
using namespace std;
void find(int a, int b);

int main()
{
    int c=5, d=6, e;
    /*
    int a,b, c;
    cout<<"enter the first no:";
    cin>>a;
    cout<<"enter the second no:";
    cin>>b;
    find(a,b);*/
    cout<<c<<" "<<d<<" ";
    for(int i=3;i<=5;i++)
    {
        e=c+d;
        cout<<e<<" ";
        c=d;
        d=e;
    }
    return 0; 
}

/*
void find(int a, int b)
{
    int c;
    for(int i=0;i<5;i++)
    {
    c=a+b;
    cout<<"no:"<<c<<endl;
    a=b;
    b=c;
    }
}
*/