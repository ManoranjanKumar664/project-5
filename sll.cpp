#include<iostream>
using namespace std;
void take(int x);
void show();

struct node
{
    int data;
    node *link;
};
node *start=0;
int main()
{
    take(5);
    take(5);
    take(300);
    show();
    cout<<"successfully inserted";
    return 0;
}

void take(int a)
{
    node *p=new node;
    p->data=a;
    p->link=0;
    if(start==0)
    {
     start=p;
    }
    else
    {
        node *temp=start;
        p->link=temp;
        start=p;
    }
}

void show()
{
    if(start==0)
    {
        cout<<"sll is empty";
    }
    else
    {
        node *temp=start;
        cout<<"values of sll:"<<endl;
        while(temp->link!=0)
        {
            cout<<temp->data<<endl;
            temp=temp->link;
        }
        cout<<temp->data<<endl;
    }
}