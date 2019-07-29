#include<stdio.h>
int main()
{
	int a,b,i,j,temp=0;
	printf("enter size of array");
	scanf("%d",&a);
	printf("enter array elements");
	int *arr=(int *)malloc(a*sizeof(int));
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter size of groups to be reversed");
	scanf("%d",&b);
	for(i=0;i<a;i=i+b)
	{
		if((i+b)<=a)
		{
			for(j=0;j<b/2;j++)
			{
				temp=arr[i+b-j-1];
				arr[i+b-j-1]=arr[i+j];
				arr[i+j]=temp;
			}
		}
		else if((i+b)>a)
		{
			int x;
			x=i+b-a;
			for(j=0;j<x/2;j++)
			{
				temp=arr[i+j];
				arr[i+j]=arr[i+x-j-1];
				arr[i+x-j-1]=temp;
			}
		}	
		
	}
	printf("required reversed array");
	for(i=0;i<a;i++)
	{
		printf("%d\t",arr[i]);
	}
}
