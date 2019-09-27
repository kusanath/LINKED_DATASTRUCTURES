#include<stdio.h>

#include<stdlib.h>

struct node

     {

        int data;

        struct node *addr;

     };

struct node *createnode(int item);

struct node *insertbeg(struct node *n,struct node *head);

struct node *insertend(struct node *n,struct node *head);

struct node *insertmid(struct node *n,struct node *head,int pos);

struct node *delbeg(struct node *head);

struct node *delend(struct node *head);

struct node *delmid(struct node *head,int data);

void traversal(struct node *head);

void main()

{

int choice,item,pos,data;

struct node *head=NULL, *n;

while (1)

{

printf(" \nDear user enter the choices for :\n1.insert at the begining\n2.insert at the middle\n3.insert at the end\n4.delete at the beginning\n5.delete at the end\n6.delete at the middle\n7.display traversal\n");

printf("Enter the choice required:\n ");

scanf("%d",&choice);

switch(choice)

    {

    case 1:

        {

        
        printf("\nenter the data: ");

        scanf("%d",&item);

        n=createnode(item);

        head=insertbeg(n,head);

        break;

        }

 

    case 2:

        {

      
        printf("\nEnter the data for insertion: ");

        scanf("%d",&item);

        n=createnode(item);

        printf("Enter the position to which data is to be inserted: ");

        scanf("%d",&pos);

        head=insertmid(n,head,pos);

        break;

        }

 

    case 3:

        {

       

        printf("\nEnter the data: ");

        scanf("%d",&item);

        n=createnode(item);

        head=insertend(n,head);

        break;

        }

 

    case 4:

        {

       
        head=delbeg(head);

        break;

        }

    case 5:

        {

       

        head=delend(head);

        break;

        }

    case 6:

        {

     

        printf("\nEnter the data to be deleted: ");

        scanf("%d",&data);

        head=delmid(head,data);

        break;

        }

    case 7:

        {
        printf("the traversal is:\n");

        traversal(head);

        printf("\n");

        break;

        }

    default:
	{
		printf("!!!ATTENTION!!!!\n The choice you entered is invalid please choose the correct choice\n");
		break;
	}

    }

}  

}

struct node *createnode(int item)

{

    struct node *p;

    p=(struct node *)malloc(sizeof(struct node ));

    p->data=item;

    p->addr=NULL;

    return p;

}

 

struct node *insertbeg(struct node *n,struct node *head)

{

    if (head==NULL)

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

 

void traversal(struct node *head)

{

    struct node *p;

    if (head==NULL)

        {

        printf("\n!!ATTENTION!!\nEMPTY;\n");

        }

     else

       {

        p=head;

        while(p!=NULL)

            {

            printf("%d\n",p->data);

            p=p->addr;

            }

        }

}

 

struct node *insertend(struct node *n,struct node *head)

{

    struct node *p;

    if (head==NULL)

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

    return head;

}

 

struct node *insertmid(struct node *n,struct node *head,int pos)

{

    int i;

    struct node *p;

    if (head==NULL)

        {

          head=n;

        }

    else

        {

        i=1;

        p=head;

        while(p->addr!=NULL&&i<pos-1)

        {

            p=p->addr;

            i++;

        }

        n->addr=p->addr;

        p->addr=n;

        }

    return head;

}

 

struct node *delbeg(struct node *head)

{

 

    if (head==NULL)

      {

        printf("\n!!ATTENTION!!\nEMPTY;\n");

       }

    else

       {

        head=head->addr;

        }

    return head;

}

 

struct node *delend(struct node *head)

{

    struct node *p, *c;

    if (head==NULL)

        {

        printf("\n!!ATTENTION!!\nEMPTY;\n");

        }

    else

        {

        p=head;

        while(p->addr!=NULL)

        {

            c=p;

            p=p->addr;

        }

        c->addr=NULL;

       }

    return head;

}

 

struct node *delmid(struct node *head,int data)

{

    struct node *p, *c;

    if (head==NULL)

        {

        printf("\n!!ATTENTION!!\nEMPTY;\n");

         }

    else

        {

        p=head;

        while(p->data!=data && p!=NULL)

            {

            c=p;

            p=p->addr;

            }

        if(p!=NULL)

            {

            c->addr=p->addr;

            }

        else

            {

             printf("No data found\n");

            }

        }

    return head;

}

