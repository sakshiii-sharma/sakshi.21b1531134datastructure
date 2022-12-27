#include<stdio.h>
#include<stdlib.h>
 struct node
{
	int data;
	struct node *link;
};

int main()
{
	struct node *start,*temp,*r,*top;
	start=NULL;
	int x,value;
	printf("Insertion in the circular ll\n");
	x=1;
	while(x==1)
	{
		printf("Enter the value to be inserted in the c ll\n");
		scanf("%d",&value);
		if(top==NULL)
		{
			r=(struct node*)malloc(sizeof(struct node));
			r->data=value;
			r->link=NULL;
			top=r;
		}
		else
		{
			r=(struct node*)malloc(sizeof(struct node));
			r->data=value;
			r->link=top;
			top=r;
		}
		printf("Want more value to be inserted press 1\n");
		scanf("%d",&x);
	}
	r=top;
	int count=0;
	while(r!=NULL)
	{
		printf("%d->",r->data);
		r=r->link;
		count++;
	}
	x=1;
	printf("\n%d nodes are in the stack\n",count);
		while(x==1)
	{
		if(top==NULL)
		{
			printf("Stack is underflow");
			break;
		}
		else
		{
			temp=top;
			top=top->link;
			free(temp);
		}
		printf("Want more value to be popped press 1\n");
		scanf("%d",&x);
	}
	r=top;
	count=0;
	while(r!=NULL)
	{
		printf("%d->",r->data);
		r=r->link;
		count++;
	}
	return 0;
}
