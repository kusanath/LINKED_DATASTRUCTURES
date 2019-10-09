#include<stdio.h>
int top[5],boundary[5];
int size=100;
int stack[100];
void push(int pos,int data);
int pop(int pos);
void main()
{
	int i,data,choice,n,pos,a;
	top[0]=boundary[0]=-1;
	printf("NUMBER OF STACKS NEEDED:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		top[i]=boundary[i]=((size-1)/n)*i;
	}
	while(1)
	{
	printf("\n 1.INSERTION IN MULTISTACK\n 2.DELETION IN MULTISTACK\n");
	printf("ENTER THE REQUIRED CHOICE");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("ENTER THE INPUT DATA");
		scanf("%d",&data);
		printf("ENTER THE REQUIRED STACK POSITION");
		scanf("%d",&pos);
		push(pos,data);
		break;
		
		case 2:
		printf("ENTER THE REQUIRED STACK POSITION");
		scanf("%d",&pos);
		a=pop(pos);
		printf("\nTHE DELETED ELEMENT IS: %d\n",a);
		break;
	}
	}
}	

void push(int pos,int data)
{
	if(top[pos]==boundary[pos+1])
	{
		printf("overflow\n");
	}
	else
	{
		stack[++top[pos]]=data;
	}
}

int pop(int pos)
{
	int d;
	if(top[pos]==boundary[pos])
	{
		printf("underflow\n");
	}
	else
	{
		d=stack[top[pos]];
		top[pos]--;
	}
return d;
}



