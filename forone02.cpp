#include<iostream>
using namespace std;

int main()
{
    int odd=0, even=0;
    int a[]={40, 50, 39, 43,2, 59, 9};
    for(int temp:a)
    {
        if(temp%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        //cout<<temp<<endl;
    }
    cout<<"no of odd="<<odd<<endl;
    cout<<"no. of even="<<even<<endl;
    return 0;
}