#include<stdio.h>
int main()
{
	int n,x,max=0,i,sum=0;
	printf("TOTAL NUMBER OF BOOKS\n");
	scanf("%d",&n);
	int *arr=(int *)malloc(sizeof(int)*n);
	printf("TOTAL NO OF PAGES IN EACH BOOK\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("TOTAL NUMBER OF STUDENTS\n");
	scanf("%d",&x);	
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		sum=sum+arr[i];
	}
	int l=max;
	int r=sum;
	int mid;
	while(l<r)
	{
		 mid=(l+r)/2;
		int stu=func(arr,n,mid);
		if(stu<=x)
		{
		 r=mid;
		}
		else
		{
			l=mid+1;
		}
	
	}
	printf("MAXIMUM NO. OF PAGES OF A BOOK WHICH STUDENT CAN READ MUST BE MINIMUM IS =  %d PAGES",l);
}
int func(int arr[],int n,int mid)
{
	int i,sum=0,count=1;
	for(i=0;i<n;i++)
	{
	if(sum+arr[i]>mid)
	{
		count++;
		sum=arr[i];
	}
	else
	{
		sum=sum+arr[i];
	}
    }
    return count;
}

