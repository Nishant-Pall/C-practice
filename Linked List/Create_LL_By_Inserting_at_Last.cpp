#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node * next;
};
class LinkedList
{
	private:
		Node *first;
		Node *last;
	public:
		LinkedList()
		{
			first = NULL;
			last = NULL;
		}
		void Insert(int data);
		void display();
};
void LinkedList::Insert(int data)
{
	Node *t = new Node;
	t->data = data;
	t->next = NULL;
	if(first==NULL)
	{
		first = last = t;
	}
	else
	{
		last->next = t;
		last = t;
	}
}
void LinkedList::display()
{
	Node *p = first;;
	while(p)
	{
		cout<<p->data<<endl;
		p = p->next;	
	}
	
}

int main()
{
	LinkedList l;
	l.Insert(10);
	l.Insert(20);
	l.Insert(30);
	l.Insert(40);
	
	l.display();
	return 0;
}
