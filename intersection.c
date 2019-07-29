#include<stdio.h>
int main()
{
	int a,i,j,b;
	printf("Enter size of 1st array\n");
	scanf("%d",&a);
	int *arr1=(int *)malloc(sizeof(int)*a);
	int *arr2=(int *)malloc(sizeof(int)*a);
	printf("Enter elements in 1st array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter size of 2nd array\n");
	scanf("%d",&b);
	printf("Enter elements in 2nd array\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int *res=(int *)malloc(sizeof(int)*a);
	i=0;j=0;
	int k=0;
	while(i<a && j<b)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else
		{
			res[k]=arr1[i];
			i++;
			j++;
			k++;
		}
	}
	printf("Intersection of 2 arrays is\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",res[i]);
	}
}
