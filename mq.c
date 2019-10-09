#include<stdio.h>
int front[5],boundary[5],rear[5];
int size=100;
int queue[100];
void enqueue(int pos,int data);
int dequeue(int pos);
void main()
{
	int i,data,choice,n,pos,a;
	front[0]=boundary[0]=rear[0]=-1;
	printf("NUMBER OF QUEUE NEEDED:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		front[i]=boundary[i]=rear[i]=((size-1)/n)*i;
	}
	while(1)
	{
	printf("\n 1.INSERTION IN MULTIQUEUE\n 2.DELETION IN MULTIQUEUE\n");
	printf("\nENTER THE REQUIRED CHOICE");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("\nENTER THE INPUT DATA");
		scanf("%d",&data);
		printf("\nENTER THE REQUIRED QUEUE POSITION");
		scanf("%d",&pos);
		enqueue(pos,data);
		break;
		
		case 2:
		printf("\nENTER THE REQUIRED QUEUE POSITION");
		scanf("%d",&pos);
		a=dequeue(pos);
		printf("\nTHE DELETED ELEMENT IS: %d\n",a);
		break;
		
		default:
		{
			printf("\n!!!INVALID CHOICE!!!\n");
		}
	}
	}
}	

void enqueue(int pos,int data)
{
	if(rear[pos]==boundary[pos+1])
	{
		printf("\n!!!OVERFLOW!!!\n");
	}
	else
	{
		if(rear[pos]==boundary[pos])
		{
			front[pos]++;
		}
		queue[++rear[pos]]=data;
		
	}
}

int dequeue(int pos)
{
	int d;
	if(front[pos]==boundary[pos])
	{
		printf("\n!!!UNDERFLOW!!!\n");
	}
	else
	{
		d=queue[front[pos]];
		if(front[pos]==rear[pos])	
		{
			front[pos]=rear[pos]=boundary[pos];
		}
		else
		{
			front[pos]++;
		}
		
	}
return d;
}



