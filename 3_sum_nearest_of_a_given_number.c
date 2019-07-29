#include<stdio.h>
int comparator(const void *a,const void *b)
{
	int p=*(const int *)a;
	int q=*(const int *)b;
	return (p-q);
}
int main()
{
	int a,i,b;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int arr[a];
	printf("Enter elements in an array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	  qsort((void*)arr, a, sizeof(arr[0]), comparator); 
	  printf("Enter any number\n");
	  scanf("%d",&b);
	  int x,min=999,j,k,m,n,o,mm;
	  for(i=0;i<a-2;i++)
	  {
	  	j=i+1;
	  	k=a-1;
	  
	  	while(j<k)
		{
			x=arr[i]+arr[j]+arr[k];
			 mm=x-b;
			 if(mm<0)
			 {
			 	mm=-1*mm;
			 }
		
			 if(mm<min)
			 {
			 	min=mm;
			 	m=i;
			 	n=j;
			 	o=k;
			 }  
	  	  if((arr[i]+arr[j]+arr[k])>b)   
			{
			   k--;	
			}	
			else if((arr[i]+arr[j]+arr[k])<b)   
			{
			   j++;	
			}
			else
			{
				break;
			}
		}
	 }
printf("sum=%d\nElements in an array=[%d,%d,%d]",min+b,arr[m],arr[n],arr[o]);
}
