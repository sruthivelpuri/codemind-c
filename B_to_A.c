#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d%d",&x,&y);
    for(i=y;i>=x;i--)
    {
        printf("%d ",i);
    }
}