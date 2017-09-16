#include<stdio.h>
#include<stdlib.h>

struct node
{
	int a;
	struct node *next;
};

struct node *START=NULL;

struct node *createnode(int i)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->a=i;
	temp->next=NULL;
	return temp;
}


void display(int n,int count)
{
	if(count<n)
	{
		printf("-1");
		return;
	}
	struct node *temp=START; 
	for(int i=0;i<count-n;i++)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		printf("%d ",temp->a);
		temp=temp->next;
	}
}
		
		


int main()
{
	int n,m,count=0;
	scanf("%d",&n);
	while(n!=-1)
	{
		count++;
		struct node * temp=createnode(n);
		if(START==NULL)
		{
			START=temp;
		}
		else
		{
			struct node * temp1=START;
			while(temp1->next!=NULL)
				temp1=temp1->next;
			temp1->next=temp;				
		}
		scanf("%d",&n);
	}
	
	scanf("%d",&m);
	display(m,count);
	return 0;
}
