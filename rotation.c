#include<stdio.h>
int main()
{
	int a,b,i,j;
	int c,temp=0;
	printf("enter size of array");
	scanf("%d",&a);
	int *arr=(int *)malloc(a*sizeof(int));
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("number of rotations");
	scanf("%d",&b);
	c=b%a;
	for(i=0;i<c;i++)
	{
		temp=arr[a-1];
		for(j=a-2;j>=0;j--)
		{
			arr[j+1]=arr[j];	
		}	
			arr[0]=temp;
	}
	for(i=0;i<a;i++)
	{
		printf("%d\t",arr[i]);
	}
}
