#include<stdio.h>
int main()
{
	int a,i,b,l=0,r=0,max=0,right=0,left=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&b);
	int z=b;
	while(r<(a-1))
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
		  	 while(arr[l]==0)
		  	 {
		  	 	l++;
			 }
			 l++;
		  }
		  if((r-l)>max)
		  {
		  	max=r-l;
		  	right=r; 
		  	left=l;
		  }
		  b=z;
	}
	printf("%d\t%d\t%d",max,left,right);	
}
