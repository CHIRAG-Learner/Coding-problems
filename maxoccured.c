#include<stdio.h>
int main()
{
	int a,i,max=0;
	int ans,sum=0;
	printf("enter size of array");
	scanf("%d",&a);
	
	int *arr1=(int *)malloc(sizeof(int)*a);
    int *arr2=(int *)malloc(sizeof(int)*a);
    printf("enter elements in left array");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr1[i]);
    }
    printf("enter elements in right array");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr2[i]);
    }
    for(i=0;i<a;i++)
    {
       if(max<arr2[i])
	   {
	   	max=arr2[i];
	   }
	}
		int x,y;
	int *arr=(int *)malloc(sizeof(int)*(max+2));
	for(i=0;i<max+2;i++)
	{
		arr[i]=0;
	}
	int max1=0;
	for(i=0;i<a;i++)
		{
		   	   x=arr1[i];
			   arr[x]=arr[x]+1;	
			   y=arr2[i];
			   arr[y+1]=arr[y+1]-1;
		}
		for(i=0;i<max+2;i++)
		{
			sum=sum+arr[i];
			if(sum>max1)
			{
				max1=sum;
				ans=i;
			}
		}
		
		printf("MAX OCCURED ELEMENT IS %d\t",ans);
}
