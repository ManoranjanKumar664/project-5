#include<iostream>
using namespace std;

int main()
{
  //  int p[5]={49, 39 ,30, 50, 10};

    int *p=new int[5];
    for(int i=0;i<5;i++)
    {
     cin>>p[i];
    } 

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    /*
    for(int c:p)
    {
        cout<<c<<endl;
    } */
    //delete []p;
    return 0;
}