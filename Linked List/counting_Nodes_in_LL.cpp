#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first;
int create(int A[],int n)
{
	struct Node *t,*last;
	first=new Node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
int loopCount(struct Node *p)
{
	int c=0;
	while(p!=0)
	{
		c++;
		p=p->next;
	}
	return c;
}
int recurseCount(struct Node *p)
{
	if(p)
		return 1+recurseCount(p->next);
	else
		return 0;
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
int Recurse(struct Node *p)
{
	if(p==0)
		return 0;
	else
		return Recurse(p->next)+p->data;
}
int main()
{
	int A[]={10,20,30,40,50};
	create(A,5);
	printf("%d (using while loop) \n",loopCount(first));
	printf("%d (using recusrion) \n",recurseCount(first));
	printf("%d (sum using while loop) \n",Add(first));
	printf("%d (sum using recursion)",Recurse(first));
	return 0;
}
