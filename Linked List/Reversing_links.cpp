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
		void Reverse();
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
void LinkedList::Reverse()
{
	Node* p =first;
	Node* q,*r;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first = q;
}

int main()
{
	LinkedList l(1);
	l.Insert(2);
	l.Insert(3);
	l.Insert(4);
	l.Insert(5);
	l.Insert(6);
	l.Insert(7);
	
	l.Reverse();
	
	l.Display();
	
	return 0;
}
