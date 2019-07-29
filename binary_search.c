#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter size of an array\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter array elements\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Element to be found\n");
	scanf("%d",&b);
	int l=0,r=a-1,mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]>b)
		{
			r=mid;
		}
		else if(arr[mid]>b)
		{
			l=mid;
		}
		else if(arr[mid]==b)
		{
			break;
		}
		else
		{
			mid=-1;
			break;
		}
	}
printf("It is %d element in your array",mid+1);	
}
