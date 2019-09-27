#include<stdio.h>
int data,size=100,top=-1,front=-1,stack[100];
void push(int data)
{
	if(top==size-1)
	{
		printf("!!OVERFLOW!!\n");
	}
	else
	{
		top=top+1;
		stack[top]=data;
	}
};
int pop()
{
	int d;
	if(top==-1)
	{
		printf("!!UNDERFLOW!!\n");
	}
	else
	{
		d=stack[top];
		if(front==top)
		{
			front=-1;
			top=-1;
		}
		else
		{
			top--;
		}
		return d;
	}
	
};
void main()
{
	int choice,d,data,a;
while(1)
	{
	printf("user!; please select choice required;\n1.Insertion in stack\n2.Deletion in stack\n");
	scanf("%d",&choice);
	

	switch(choice)
	{
	case 1:
	{
		printf("Data to be inserted:");
		scanf("%d",&data);
		push(data);
		break;
	}
	case 2:
	{
		a=pop();
		printf("Deleted element:%d\n",a);
		break;
	}
	default:
	{
         printf("!!INVALID CHOICE!!\ncheck the choice you have entered\n");
	}
	}
	}
};

