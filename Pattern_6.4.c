#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("%c ",64+i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}