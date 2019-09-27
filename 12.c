#include<stdio.h>
#include<stdlib.h>
struct node{
	    int data;
	     struct node*addr;
	};
struct node *createnode(int data);
struct node *insertbeg(struct node *head,struct node *n);
struct node *insertend(struct node*head,struct node*p,struct node*n);
void travesel(struct node *head);
 void main()
{
        struct node *n,*head=NULL;
	int cha,data;
	while(1)
	 {
        printf("hello user!. enter: 1.for insertion at begining\n2.for insertion at end\n 3.for insertion at a position \n4.deletion at begining\n 5.deletion at end \n6.deletion at a position \n7.transversel\n");
	printf("enter the choice");
	scanf("%d",&cha);
	
	
	switch(cha)
 		{
		 case 1:printf("enter the integer data");
			scanf("%d",&data);
			n=createnode(data);
			head=insertbeg(head,n);
			break;
		case 2:printf("enter data\n");
		         scanf("%d",&data);
			n=createnode(data);
			head=insertbeg(head,n);
			break;
	 	case 3:printf("insertion at a position\n");
			break;
		case 4:printf("deletion at begining\n");
			break;
		case 5:printf("deletion at end\n");
			break;
		case 6:printf("deletion at a position\n");
			break;
		case 7:
		      travesel(head);
			break;
		default:printf("check the choice is invlaid\n");
			break;
		}
	}
}
struct node *createnode(int data)
{
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->addr=NULL;
	return p;
}


struct node *insertbeg(struct node *head,struct node *n)
	{
 		if(head==NULL)
		 {
	          head=n;
		 }
		else
	         {
		  n->addr=head;
		  head=n;
		
		 }
		return head;
	}
void travesel(struct node *head)
	{
		struct node *p;
		p=head;
         if(p==NULL)
	  {
	    printf("node is empty");
	  }
 	 else
	 {
		
		while(p!=NULL)
			{
				printf("%d\n",p->data);
				p=p->addr;
			}
	}
      }
			
struct node *insertend(struct node*head,struct node*p,struct node*n)
 {
 	if(head==NULL)
 	 {
 	  head=n;
 	  }
 	else
 	  {
 	  	p=head;
 	  	while(p->addr!=NULL)
 	  	{
 	  	  p=p->addr;
 	  	}
 	  	  p->addr=n;
 	 }
 	 return p;
}
 	  		
