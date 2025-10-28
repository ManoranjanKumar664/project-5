#include<iostream>
using namespace std;

int main()
{
    int odd=0, even=0;
    int a[5]={49, 30, 50};
   for(int i=0;i<3;i++)
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
   cout<<"no of odd="<<odd<<endl;
   cout<<"no of even="<<even<<endl;
    return 0;
}