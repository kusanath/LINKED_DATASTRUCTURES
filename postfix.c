
#include<stdio.h>
#include<ctype.h>
#include<math.h>
int data,size=100,top=-1,front=-1,stack[100];
void push(int data);
int pop();
void main()
{
 	int i=0,x,y,result,value;
 	char a[50];
 	printf("enter the string:_");
	scanf("%s",&a);
 	while(a[i]!='\0')
 	{
 		if(isdigit(a[i]))
 		{
 			push(a[i]-'0');
 			
 		}
 		else
 		{
 			y=pop();
 			x=pop();
 			if(a[i]=='+')
 			{
 				result=x+y;
 			
 			}
 			else if(a[i]=='/')
 			{
				result=x/y;
 			
 			}
 			else if(a[i]=='-')
 			{
				result=x-y;
 			
 			}
 			else if(a[i]=='*')
 			{
				result=x*y;
 			
 			}
 			else if(a[i]=='^')
 			{
				result=pow(x,y);
 			
 			}
 			else
 			{
 				printf("!!!_INVALID_!!!");
 			}
 			push(result);
 		
 		}
 		i++;
 	}
	value=pop();
	printf("result is_%d\n",value);
	
}


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
