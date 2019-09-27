#include<stdio.h>
void main()
{
	int a[25];
	int i,j,temp,limit;
	printf("enter the number of elements;");
	scanf("%d",&limit);
	printf("enter the element;");
	for(i=0;i<limit;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<limit-1;i++)
	  {
	  	for(j=0;j<limit-i-1;j++)
	  	{
	  	  if(a[j]>a[j+1])
	  	   {
	  	   	temp=a[i];
	  	   	a[i]=a[j+1];
	  	   	a[j+1]=temp;
	  	   	
	  	   }
	       }
	 }
	 for(i=0;i<limit;i++)
	  {
	  	printf("%d",a[i]);
	  }
}
