#include<stdio.h>
int queue[50];
int size=100,front=-1,rear=-1;
void enqueue(int data);
int dequeue();
void main()
{
	int data,ch,r;
	while(1)
	{
		printf("1.enqueue\n $ 2.dequeue\n");
		printf("user!;please enter the choice required");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			       printf("enter data:");
			       scanf("%d",&data);
			       enqueue(data);
			       break;
			case 2:
				r=dequeue();
				printf("Deleted element:%d\n",r);
				break;
  		}
  	}
}
void enqueue(int data)
{
	if(rear==size-1)
	{
		printf("OVER FLOW");
	}

	else
	{
		if(rear==-1)
		{
			front=0;
		}
		queue[++rear]=data;
	}
};
int dequeue()
{
	int d;
	if(front==-1)
	{	
		printf("UNDERFLOW\n");
	}
	else
	{
		d=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
		return d;
	}
};
