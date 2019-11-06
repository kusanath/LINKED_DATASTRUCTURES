#include<stdio.h>
#include<stdlib.h>
struct node

{
	int data;
	struct node *rc;
	struct node *lc;
};

struct node *createnode(int item)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->rc=NULL;
	p->lc=NULL;
	return p;
};

struct node *insert(struct node *n,struct node *root)
{
    struct node *ptr;
    struct node *p;
    if (root==NULL)

        {

          root=n;

        }

    else

        {

		ptr=root;
		while(ptr!=NULL)
		{
			if(ptr->data>=n->data)
			{
				p=ptr;
				ptr=ptr->lc;
			}
			else
			{
				p=ptr;
				ptr=ptr->rc;
			}
		}
		
		if(p->data >=n->data)
		{
			p->lc=n;
		}
		else
		{
			
			p->rc=n;
		}
		
		
       }
       return root;

}

void traversal(struct node *root)
{
	if(root!=NULL)
	{
		traversal(root->lc);
		printf("%d\n",root->data);
		traversal(root->rc);
	}

}
void main()
{
	int cho,data;
	struct node *n,*root=NULL;
	while(1)
	{
	printf("ENTER THE REQUIRED CHOICE\n1.INSERTION\n2.TRAVERSAL\n");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
		{
		
			printf("INSERTION\n");
			printf("enter the data:_");
			scanf("%d",&data);
			n=createnode(data);
			root=insert(n,root);
			break;
		}
		
		case 2:
		{
		
			printf("TRAVERSAL\n");
			traversal(root);
			break;
		}
		
	}
        }
}

