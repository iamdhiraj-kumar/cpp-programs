#include<stdio.h>
int main()
{
	int i,sum=0,n, arr[100];
	printf("enter the no. of elements in array:-");
	scanf("%d",&n);
	
	printf("enter the array elements:-  \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("sum of array elements =%d",sum);
	
	return 0;
}
