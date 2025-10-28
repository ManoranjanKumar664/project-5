#include<iostream>
using namespace std;

int main()
{
    int b[]={49, 30, 30};
    cout<<"elements are"<<endl;
    for(int i=0;i<sizeof(b)/sizeof(int);i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int *p=new int[5]{4, 3, 5,10, 50};
    cout<<"enter any 5 elements";
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

}