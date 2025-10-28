#include<iostream>
using namespace std;
void take(int x);
int start=0;
struct node
{
    int x;
    node *next;
};

int main()
{
    cout<<"hello world";
    return 0;      
}

void take(int a)
{
    node *first_node=new node;
    first_node->next=a;
    if(start==0)
    {
        start=first_node;
    }
}