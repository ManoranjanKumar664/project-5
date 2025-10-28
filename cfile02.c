#include<stdio.h>
#include<stdlib.h>

// no require to write "using namespace std"

int main()
{
    int *p=malloc(3*sizeof(int));
    printf("enter any value");
    scanf("%d",&p);
    printf("value=%d",p);
    return 0;
}