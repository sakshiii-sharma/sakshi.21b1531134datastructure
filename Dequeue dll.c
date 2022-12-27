#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node*prev;
int data;
struct node*next;
};

int main()
{
int x=1,y,value;
struct node *front,*rear,*temp,*r;
front=rear=NULL;

printf("enqueue opn in dequeue \n");
while(x==1)
{
printf("want to enqueue at rear end ?press 2\n");
printf("want to enqueue at front end ?press 3\n");
scanf("%d",&y);

while(y==2)
{
printf("enqueue at rear end\n");
printf("enter the value to be enqueued\n");
scanf("%d",&value);
if (front==NULL)
{
r=(struct node *)malloc(sizeof(struct node));
r->data=value;
r->prev=NULL;
r->next=NULL;
front=rear=r;
}
else{
    if (rear->next==NULL)
{

    r=(struct node*)malloc(sizeof(struct node));
    r->data=value;
    r->prev=rear;
    rear->next=r;
    front->prev=r;
    r->next=front;
    rear=r;
    front->prev=rear;
}
}
printf("want more value to enqueued at rear end?press 2\n");
scanf("%d",&y);
}
while(y==3)
{

    printf("enqueue at front end\n");
    printf("enter the value to be enqueued\n");
    scanf("%d",&value);
    if(front==NULL)
    {
        r = (struct node *)malloc(sizeof(struct node));
        r ->data=value;
        r ->prev= NULL;
        r ->next= NULL;
        front=rear=r;
    }
    else
    {
        if(front ->next==NULL)
        {
            r = (struct node *)malloc(sizeof(struct node));
            r ->data=value;
            r ->next=front;
            front ->prev=r;
            front=r;
            front ->prev=rear;
            rear ->next=rear;
        }
        else
        {
            r = (struct node *)malloc(sizeof(struct node));
            r ->data=value;
            r ->next=front;
            front ->prev=r;
            front=r;
            front ->prev=rear;
            rear ->next=front;
        }
    }
    printf("want more value to enqueued at front end? press 3\n");
    scanf("%d",&y);
}
}

temp = front;
struct node *p=NULL;

while(temp!=p)
{
	printf("%d <--> ",temp->data);
	temp = temp->next;
	p = front;
}

return 0;
}






