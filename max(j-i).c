#include<stdio.h>
struct elem
{
	int value;
	int index;
};
int comparator(const void* p, const void* q)
		{
			
            int l = ((struct elem *)p)->value; 
    		int r = ((struct elem *)q)->value;  
   			 return (l - r); 
		}
int main()
{
	int a,i;
	printf("enter size of array");
	scanf("%d",&a);
	int *arr=(int *)malloc(a*sizeof(int));
	printf("enter array elements");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
    struct elem arr1[a];
    for(i=0;i<a;i++)
    {
    	arr1[i].value=arr[i];
    	arr1[i].index=i;
	}
		qsort(arr1,a,sizeof(arr1[0]),comparator);
	int min=arr1[0].index,max=0;
	 for(i=0;i<a;i++)
	 {
        if(arr1[i].index-min>=max)
		{
            max=arr1[i].index-min;
        }
        min=arr1[i].index<min?arr1[i].index:min;
     }
     printf("maximum j-i is\n");
printf("%d",max);	
}
