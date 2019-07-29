#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int *arr=(int *)malloc(sizeof(int)*a);
	printf("Enter elements in an array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&b);
	int y=b;
	int l=0,r=0,x,s,e,max=0;
	while(r<a)
	{
	  if(arr[r]==1)
	  {
	  	r++;
	  }
	  else if(arr[r]==0 && b)
	  {
	  	r++;
	  	b--;
	  }
	  else if(arr[r]==0 && b==0)
	  {
	  	while(arr[l]!=0)
	  	{
	  	    l++;	
	    }
	    l++;
	    r=l;
	    b=y;
	  }
	   x=r-l;
	  if(max<x)
	  {
	  	max=x;
	  	s=l;
	  	e=r-1;
	  }
	}
	printf("Maximum size of window=%d \nstarting from=%d\nending from=%d",max,s,e);
}
