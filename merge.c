/*program on mergesort
author:KUSANATH*/


#include<stdio.h>
void mergesort(int [],int,int,int);
void partition(int arr[50],int low,int high)
{
	int mid;
	if (low<low)
	{
		mid=(low+high)/2;
		partition(arr,low,high);
		partition(arr,mid+1,high);
		mergesort(arr,low,mid,high);
		
	}
}
void mergesort(int arr[50],int low,int mid,int high)
{
	int l,i,m,k,temp[50];
	l=low;
	i=low;
	m=mid+1;
	while(l<=mid&&m<=high)
	{
	     if(arr[l]<=arr[m])
	     {
	     
		temp[i]=arr[l];
		l++;
	     }
	     else
	     {
	     	temp[i]=arr[m];
	     	m++;
	     }
	     i++;
	}
	if(l>mid)
	{
		for(k=m;k<=high;k++);
		{
			temp[i]=arr[k];
			l++;
		}
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
	{
		arr[k]=temp[k];
	}
}

void main()
{
	int i,a[20],limit;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the elements_");
	for(i=0;i<limit;i++)
	{
	 scanf("%d",&a[i]);
	}
	 partition(a,0,limit-1);
	 printf("the sorted array is_");
	 
	 for(i=0;i<limit;i++)
	 {
	 	printf("\n%d\t",a[i]);
	 }
	
	printf("\n");
}
	
