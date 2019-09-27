#include<stdio.h>
#include<stdlib.h>
struct term
               {
		int coef,exp;
		struct term *addr;
               };
struct term*createterm(int c,int e)
   {
	struct term *p;
	p=(struct term *)malloc(sizeof(struct term));
	p->addr=NULL;
	p->coef=c;
	p->exp=e;
	return p;
   };  
struct term *createpoly(int n)
  {
     int c,e,i;
     struct term*head=NULL,*nt,*last;
     for(i=0;i<n;i++)
     {
       printf("coefficient of the term:");
       scanf("%d",&c);
       printf("exponential part:");
       scanf("%d",&e);
       nt=createterm(c,e);
       if(head==NULL)
       {
          head=nt;
          last=nt;
       }
	else
         {
             last->addr=nt;
             last=nt;  
         }
   }
    return head;
 };
 void traverse(struct term *head)
 {
      struct term *p;
      p=head;
      while(p!=NULL)
     {
        printf("%dX%d+",p->coef,p->exp);
        p=p->addr;
      }
	printf("\n");
 };
 struct term *addpoly(struct term *h1,struct term *h2);
void main()
{
	int m,n;
	struct term *p,*q,*add;
	printf("Exponentiel limit of first polynomial:");
   	scanf("%d",&n);
  	printf("enter number of terms in second polynomial"); 
   	scanf("%d",&m);
   	p=createpoly(n);
        q=createpoly(m);
        add=addpoly(p,q);
        traverse(add);
}
struct term *addpoly(struct term *h1,struct term *h2)
{
	struct term *Rh=NULL,*p1,*p2,*n,*last;
	p1=h1;
	p2=h2;
	while(p1!=NULL&&p2!=NULL)
	{
		if(p1->exp>p2->exp)
		{	
			n=createterm(p1->coef,p1->exp);
			p1=p1->addr;
		}
		
		
		 	else if(p1->exp<p2->exp)
			    {
 				n=createterm(p2->coef,p2->exp);
 				p2=p2->addr;
 			    }
			else
			  {
				n=createterm(p1->coef+p2->coef,p1->exp);
				p1=p1->addr;
				p2=p2->addr;
			   }
		if(Rh==NULL)
		  {
			Rh=last=n;
		   }
		else
		   {
			last->addr=n;
			last=n;
		    }
			
	}
	while(p1!=NULL)
	   {
		n=createterm(p1->coef,p1->exp);
		p1=p1->addr;
		if(Rh==NULL)
		  {
			Rh=last=n;
		  }
		else
		   {
			last->addr=n;
			last=n;
		   }
          }
	while(p2!=NULL)
		{
			n=createterm(p2->coef,p2->exp);
			p2=p2->addr;
		    
			if(Rh==NULL)
			    {
				Rh=last=n;
			    }
			else
			    {
				last->addr=n;
				last=n;
			    }
		     }
		return Rh;
		
		
		
}
