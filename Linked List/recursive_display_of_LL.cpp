#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
	int i;
	struct Node *temp,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(i=1;i<n;i++)
	{	
		temp=new Node;
		temp->data=A[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
void display(struct Node *p)
{
	if(p)
	{
		printf("%d ",p->data);
		display(p->next);
	}
}
int main()
{
	int A[]={2,3,4,5,6,7,8};
	create(A,7);
	display(first);
	return 0;
}
