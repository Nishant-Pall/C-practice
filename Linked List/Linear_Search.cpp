#include<iostream>
using namespace std;
struct Node
{
	int data;        		//data in first node
	struct Node *next;		//pointer pointing towards next node and is of type structure variable(struct node)
}*first;					//pointer which pointes to the head of the linked list in heap

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first =new Node;      
	first->data=A[0];		
	first->next=NULL;
	last=first;            //assign last as the terminator to the most recent node made.
//	for iterating 
	for(i=1;i<n;i++)
	{
		t=new Node;		// t is the node in heap 
		t->data=A[i];
		t->next=NULL;
		last->next=t; // this line makes sure that the pointer in the PREVIOUS node points to the next node
		last=t;		 //  assigns last node as t
	}
}
void display(struct Node *p)  // pointer p moves through the list
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
Node * LinearSearch(struct Node *p,int n)
{
	while(p)
	{
		if(p->data=n)
			return p;
		else
			return NULL;
	}
}
int main()
{
	int A[]={31,54,22,33,11};
	create(A,5);
	display(first);
	cout<<endl<<"Element found "<<LinearSearch(first,22);
	return 0;
}
