#include<stdio.h>
int main()
{
	int a,r=0,c=0,i,j;
	printf("enter sizr of 2d array\n");
	scanf("%d",&a);
	int **arr=(int **)malloc(sizeof(int)*a);
	for(i=0;i<a;i++)
	{
		arr[i]=(int *)malloc(sizeof(int)*a);
	}
	printf("enter elements in 2d array\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		if(arr[i][0]==0)
		{
			r=0;
		}
		if(arr[0][i]==0)
		{
			c=0;
		}
		
	}
	for(i=1;i<a;i++)
	{
		for(j=1;j<a;j++)
		{
		  if(arr[i][j]==0)
		  {
            arr[0][j]=0;
			arr[i][0]=0;		  	
		  }	
		}
	}
	for(i=1;i<a;i++)
	{
		for(j=1;j<a;j++)
		{
			if(arr[0][j]==0 || arr[i][0]==0)
			{
				arr[i][j]=0;
			}
		}
	}
	for(i=0;i<a;i++)
	{
		if(r==0)
		{
			arr[0][i]=0;
		}
		if(c==0)
		{
			arr[i][0]=0;
		}
	
	}
         printf("resultant array is\n");
	for(i=0;i<a;i++)
	{
	  for(j=0;j<a;j++)
	  {
	  	printf("%d\t",arr[i][j]);
		  }	
		  printf("\n");
	}
}
