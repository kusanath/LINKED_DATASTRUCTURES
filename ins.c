#include<stdio.h>
void insort(int array[100],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=array[i];
		j=i-1;
		while(temp<array[j]&&j>=0)
		{
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=temp;
	}
};
void main()
{
	int array[100],i,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d]:",i);
		scanf("%d",&array[i]);
	}
	insort(array,n);
	printf("The sorted array is:_");
	for(i=0;i<n;i++)
	{
		printf("\nArray[%d]:_%d",i,array[i]);
	}
}
