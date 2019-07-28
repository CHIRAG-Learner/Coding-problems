#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int *arr=(int *)malloc(sizeof(int)*a);
	printf("Enter Elements of an array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0,sum=0,l=0,r=0,rr;
	for(i=0;i<a;i++)
	{
		r++;
		sum=sum+arr[i];
		if(arr[i]>=sum)
		{
			l=i;
			sum=arr[i];
		}
		if(sum>max)
		{
			max=sum;
			rr=i;
		}	
	}
	printf("\nmax sum is=%d\nrange=[%d,%d]",max,l,rr);
	
}
