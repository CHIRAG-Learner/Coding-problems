#include<stdio.h>
struct interval
{
  int s;
  int l;	
};
int comparator(const void *a,const void *b)
{
	int x=((struct interval *)a)->s;
    int y=((struct interval *)b)->s;
    return (x-y);
}
int main()
{
	int a,i;
	printf("Enter number of intervals\n");
	scanf("%d",&a);
     	struct interval obj[a];
	printf("Enter elements of intervals\n");
     	for(i=0;i<a;i++)
     	{
     		scanf("%d",&obj[i].s);
     		scanf("%d",&obj[i].l);
		 }
	qsort(obj,a,sizeof(obj[0]),comparator);
	struct interval obj2[a];
	int k=0,o=0;
	obj2[k].s=obj[0].s;
	obj2[k].l=obj[0].l;
	for(i=0;i<a;i++)
	{
	  if((obj2[k].l+1)>=obj[i].s && (obj2[k].l)<=obj[i].l )
	  {
	    	obj2[k].l=obj[i].l;
	  }
	  else if((obj2[k].l+1)>=obj[i].s && (obj2[k].l)>=obj[i].l )
	  {
	    	obj2[k].l=obj2[k].l;
	  }
	  else
	  {
	  	k++;
	  	obj2[k].s=obj[i].s;
	  	obj2[k].l=obj[i].l;
	  }    	
	}
	printf("Required intervals\n");
	for(i=0;i<=k;i++)
	{
		printf("%d\t",obj2[i].s);
		printf("%d\n",obj2[i].l);
	}
	
}
