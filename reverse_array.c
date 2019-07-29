#include<stdio.h>
int main()
{
	int a,i,k=0;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int *arr=(int *)malloc(sizeof(int)*a);
	printf("Enter array Elements\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<a;i++)
	{
		if(arr[k]==arr[i])
		{
			continue;
		}
		if(arr[k]!=arr[i])
		{
			k++;
			arr[k]=arr[i];
		}
	}
	printf("Resultant Array is\n");
	for(i=0;i<=k;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}
