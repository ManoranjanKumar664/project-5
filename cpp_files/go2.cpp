#include<iostream>
void sum(int a);
int fac(int a);
using namespace std;

int main()
{
  int fina=fac(5);
  cout<<"factorial of x="<<fina<<endl;
  return 0;
}

int fac(int x)
{
    if(x==1)
    {
        return x;
    }
   return (x*fac(x-1));
}
/*int main()
{
    sum(1);
    return 0;
}

void sum(int x)
{
    if(x>5)
    {
        return;
    }
    cout<<"no is :"<<x<<endl;
    sum(x+1);
} */