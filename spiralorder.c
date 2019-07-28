#include<stdio.h>
int main()
{
	int a,i,j;
	printf("Enter size of array\n");
	scanf("%d",&a);
	int **arr=(int **)malloc(a*sizeof(int));
	for(i=0;i<a;i++)
	{
		arr[i]=(int *)malloc(a*sizeof(int));
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			arr[i][j]=0;
		}
	}
	int w=0,x=a-1,y=a-1,z=0;
	int count=0;
	while(w<=y && z<=x)
	{
		for(i=z;i<=x;i++)
		{
			arr[w][i]=++count;
		}
		w++;
		for(i=w;i<=y;i++)
		{
			arr[i][x]=++count;
		}
		x--;
		for(i=x;i>=z;i--)
		{
			arr[y][i]=++count;
		}
		y--;
		for(i=y;i>=w;i--)
		{
			arr[i][z]=++count;
		}
		z++;
	}
	printf("SPIRAL ORDER ARRAY\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
}
