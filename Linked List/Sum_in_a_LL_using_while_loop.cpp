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
		t=new Node;		// t is the pointer that moves and adds new nodes in the list
		t->data=A[i];
		t->next=NULL;
		last->next=t; // this line makes sure that the pointer in the PREVIOUS node points to the next node
		last=t;		 //  assigns last node as t
	}
}
void display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int Add(struct Node *p)
{
	int sum=0;
	while(p)
	{
		sum+=p->data;
		p=p->next;
	}
	return sum;
}
int main()
{
	int A[]={31,54,22,33,11};
	create(A,5);
	display(first);
	cout<<endl<<Add(first);
	return 0;
}
