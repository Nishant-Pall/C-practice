#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
};
class LinkedList
{
	private:
		Node* first;
		Node* last;
	public:
		LinkedList(int data){
			Node* t = new Node;
			t->data = data;
			t->next = NULL;
			first = last = t;
		}
		void Insert(int data);
		void Display();
		void Duplicate_Check();
};
void LinkedList::Insert(int data)
{
	Node* t = new Node;
	t->data = data;
	t->next = NULL;
	last->next = t;
	last = t;
}
void LinkedList::Display()
{
	Node* p = first;
	while(p)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
void LinkedList::Duplicate_Check()
{
	Node* q = first;
	Node* p = first->next;
	while(p)
	{
		if(p->data!=q->data)
		{
			q = p;
			p = p->next;
		}
		else
		{
			q->next = p->next;
			delete p;
			p = q->next;
		}
	}
}
int main()
{
	LinkedList l(2);
	l.Insert(4);
	l.Insert(6);
	l.Insert(6);
	l.Insert(6);
	l.Insert(8);
	l.Insert(8);
	l.Insert(12);
	
	l.Duplicate_Check();
	l.Display();
	return 0;
}
