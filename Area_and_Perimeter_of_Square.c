#include<stdio.h>
int main()
{
    int side,perimeter,area;
    scanf("%d%d",&side,&perimeter);
    area=side*side;
    perimeter=4*side;
    printf("%d %d",area,perimeter);
}