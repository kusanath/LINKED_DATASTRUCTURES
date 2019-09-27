#include<stdio.h>
void main()
{

	int x,c=0,a[25];
	int i,j,temp,limit;
	printf("enter the number of elements;");
	scanf("%d",&limit);
	printf("enter the element;");
	for(i=0;i<limit;i++)
	 {
	 	scanf("%d",&a[i]);
	 }


	printf("Element to be searched:");
	scanf("%d",&x);
	for(i=0;i<limit;i++)
	{
		if(a[i]==x)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("not present\n");
	}
	else
		{
			printf("Present at the position:%d\n",i);
		}
}
