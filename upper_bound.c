#include<stdio.h>
int main()
{
	int a,element,l=0,r;
	printf("Enter size of  array\n");
	scanf("%d",&a);
	int arr[a];
	r=a-1;
	int i,mid;
	printf("Enter elements in an array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element\n");
	scanf("%d",&element);
	while(l<r)
	{
		mid=(l+r)/2;
			printf("l=%d,r=%d,mid=%d\n",l,r,mid);
		if(arr[mid]<=element)
		{
			l=mid+1;
		}
		else
		{
			r=mid;
		}
	}
	printf("Upper bound of %d is = %d",element,mid);
}
