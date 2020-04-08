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
void display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
void Insert(int pos,int x)
{
	Node *t,*p;
	if(pos==0)
	{
		t=new Node;
		t->data=x;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1&&p;i++)
		{
			p=p->next;
		}
		if(p)
		{
			t=new Node;
			t->data=x;
			t->next=p->next;
			p->next=t;
			
		}
	}
}
int main()
{
	int A[]={31,54,22,33,11};
	create(A,5);
	Insert(3,10);
	display(first);
	cout<<endl<<first;
	return 0;
}
