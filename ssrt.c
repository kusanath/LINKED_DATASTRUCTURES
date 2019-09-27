#include<stdio.h>
void main()
{
	int lim,a[25],i,j,temp;
        printf("Limit of array:");
	scanf("%d",&lim);
	printf("enter the element:\n");
	 for(i=0;i<lim;i++)
	 {
	 	scanf("%d",&a[i]);
	 }

	for(i=0;i<lim;i++)
	{
		for(j=i+1;j<lim;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
    for(i=0;i<lim;i++)
	{
		printf("%d",a[i]);
	}
}
