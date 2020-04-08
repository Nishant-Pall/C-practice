#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first;

void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int max(struct Node *p)
{
	int max=-32768;
	while(p)		//loop iterates over the LL
	{
		if(p->data>max)		//if data in node is greater than max then it is assigned as max
		{
			max=p->data;		
		}
		p=p->next;
	}
	return max;
}
int min(struct Node*p)
{
	int min=32768;
	while(p)
	{
		if(p->data<min)
		{
			min=p->data;
		}
		p=p->next;
	}
	return min;
}
int main()
{
	int A[]={-21,-54,-23,-36,-69};
	create(A,5);
	display(first);
	cout<<endl<<"Max is:"<<max(first)<<endl;
	cout<<"Min is:"<<min(first);
	return 0;
}
