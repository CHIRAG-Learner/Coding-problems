#include<stdio.h>
int main()
{
	int a,b,c,i,j,k;
	printf("Enter size of 1st element\n");
	scanf("%d",&a);
	int arr1[a];
	printf("Enter elements of 1st array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter size of 2nd element\n");
	scanf("%d",&b);
	int arr2[b];
		printf("Enter elements of 2nd array\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("Enter size of 3rd element\n");
	scanf("%d",&c);
	int arr3[c];
		printf("Enter elements of 3rd array\n");
	for(i=0;i<c;i++)
	{
		scanf("%d",&arr3[i]);
	}
	i=0;j=0;k=0;
	int max,min,min2=999;
	while(i<(a-1) && j<(b-1) && k<(c-1))
	{
		if(arr1[i]>arr2[j] && arr1[i]>arr3[k])
		{
			max=arr1[i];
		}
		else if(arr2[j]>arr1[i] && arr2[j]>arr3[k])
		{
			max=arr2[j];
		}
		else if(arr3[j]>arr1[i] && arr3[j]>arr2[k])
		{
			max=arr3[k];
		}
		
		if(arr1[i]<=arr2[j] && arr1[i]<=arr3[k])
		{
			min=arr1[i];
			i++;
		}
		else if(arr2[j]<=arr1[i] && arr2[j]<=arr3[k])
		{
			min=arr2[j];
			j++;
		}
		else if(arr3[j]<=arr1[i] && arr3[j]<=arr2[k])
		{
			min=arr3[k];
			k++;
		}
		if((max-min)<min2)
		{
			min2=max-min;
		}
	}
	printf("Minimum absolute difference is=%d",min2);
}
