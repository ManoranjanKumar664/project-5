#include<iostream>
using namespace std;
void insert(int a);
void insert_beg(int a);
void insert_last(int a);
void show();
struct node
{
    int data;
    node *link;
};

node *start=0;
node *last=0;

int main()
{
    insert(5);
    insert(60);
    insert_beg(10);
    insert_last(200);
    show();
    return 0;
}

void insert(int x)
{
    node *p=new node;
    p->data=x;
    p->link=0;
    if(start==0)
    {
        start=p;
        cout<<"element inserted"<<endl;
        last=p;
    }
    else
    {
        node *temp=start;
        while(temp->link!=0)
        {
            temp=temp->link;
        }
        temp->link=p;
        cout<<"element inserted"<<endl;
        last=p;
    }
}

void insert_beg(int x)
{
    node *p=new node;
    p->data=x;
    p->link=0;
    if(start==0)
    {
        start=p;
        last=p;
    }
    else
    {
        p->link=start;
        start=p;
    }
}

void insert_last(int x)
{
    node *p=new node;
    p->data=x;
    p->link=0;
    if(start==0)
    {
        start=p;
        last=p;
    }
    else
    {
       last->link=p;
       last=p; 
       cout<<"element inserted at last"<<endl;
    }
}

void show()
{
    if(start==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        node *temp=start;
        while(temp->link!=0)
        {
          cout<<temp->data<<endl;
          temp=temp->link;
        }
        cout<<temp->data<<endl;
    }
}