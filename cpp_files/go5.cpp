#include<iostream>
using namespace std;

void callfun();
void sum();

int main()
{
    int a=5;
    cout<<"hello world";
    callfun();
    return 0;
}

void callfun()
{
    cout<<"hello";
    sum();
}

void sum()
{
    if(a>3)
    {
      cout<<"go go";
      callfun();
      a=a-1;
    }
}