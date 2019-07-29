#include<stdio.h>
int main()
{
	int a,i,k=0;
	scanf("%d",&a);
	int *arr=(int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		if(i<a-2 && arr[i]==arr[i+1] && arr[i+1]==arr[i+2])
		{
			continue;
		}
		else 
		{
			arr[k]=arr[i];
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		printf("%d\t",arr[i]);
	}
}
