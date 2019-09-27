#include<stdio.h>
void main()
{
	int i,j,temp,a[50],first,m,last,mid,n,count=0,x;
	printf("enter limit");
	scanf("%d",&m);
	printf("enter the elements;");
	for(i=0;i<m;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<m;i++)
	  {
	  	for(j=i+1;j<m;j++)
	  	 {
	  	 	if(a[i]>a[i])
	  	 	 {
	  	 	 	temp=a[i];
	  	 	 	a[i]=a[j];
	  	 	 	a[j]=temp;
	  	 	 }
	  	 }
	  }
	  printf("enter the searching element;");
	  scanf("%d",&x);
	  first=0;
	  last=m-1;
	  while(first<last)
	  {
	  	mid=first+last/2;
	  	
	  	if(x==a[mid])
	  	{	
	  		count=1;
	  		break;
	  	}
	  
	  else if (x>a[mid])
	   {
	   	first=mid+1;
	   }
	   else 
	    {
	    	last=mid-1;
	    }
	   }
	  if(count==1)
	  {
	  	printf("element is present at %d",mid);
	  }
	  else
	  {
	  	printf("element not found");
	  }
}
	
