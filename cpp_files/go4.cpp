#include<iostream>
using namespace std;
int fun1(int x, int y);

int main()
{
    int return_value;
    return_value=fun1(5,6);
    cout<<"no is="<<return_value<<endl;
    return 0;
}

int fun1(int a, int b)
{

 if(a==0)
 {
    return b;
 }
 else
 {
    return fun1((a-1),(a+b));
 }

}
