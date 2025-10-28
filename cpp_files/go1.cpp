#include<iostream>
#include<string.h>
void sum(int a);
using namespace std;

int main()
{
    sum(5);
    return 0;
}

void sum(int x)
{
    if(x==0)
    {
     cout<<"no is: "<<x;
     sum(x-1);   
    }
}