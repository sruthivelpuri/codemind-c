#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int arr[n],i;
	//reading array elements
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//1 2 3 4 5
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
	{
		sum=sum+arr[i];
	}
	}
	printf("%d",sum);
}