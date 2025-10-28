#include<stdio.h>
#include<stdlib.h>

struct name
{
    int data;
    struct name *next;
};
 struct name *start=0;
void take(int a);

int main()
{
   take(4);
   take(3); 

   return 0;
}

void take(int a)
{
  struct name *p=(struct node*)malloc(sizeof(struct node*));
  //printf("enter any value:");
  //scanf("%d",p->data);
   p->data=a;
   p->next=0;
     if(start==0)
     {
        start=p;
     }
     else
     {
        struct name *temp=start;
        while(temp->next!=0)
        {
              temp=temp->next;
        }
        temp->next=p;
     }
}