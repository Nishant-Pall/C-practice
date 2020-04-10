#include <iostream>
using namespace std;
template<class T>
class Node
{
	public:
 		T data;
 		Node *next;
};
template<class T>
class Queue
{
	private:
		 Node<T> *front;
		 Node<T> *rear;
		 Node<T> *p,*t;	// Utility pointer just for traversing.
	public:
		 Queue(){front=NULL;}
		 ~Queue();

		 void Display();
		 void Enqueue(T x);
		 T Dequeue();
};
template<class T>
Queue<T>::~Queue()
{
	 p=front;
	 while(front)
	 {
		 front=front->next;
		 delete p;
		 p=front;
	 }
}
template<class T>
void Queue<T>::Display()
{
	 p=front;
	
	 while(p)
	 {
		 cout<<p->data<<" ";
		 p=p->next;
	 }
	 cout<<endl;
}
template<class T>
void Queue<T>::Enqueue(T x)
{
	t = new Node<T>;
	if(t == NULL)
		cout<<"Queue is full";
	else
	{
		t->data = x;
		t->next = NULL;
		if(front == NULL)
			front = rear = t;
		else
		{
			rear->next = t;
			rear = t;
		}
	}
}
template<class T>
T Queue<T>::Dequeue()
{
	T x =-1;
	if(front == NULL)
		cout<<"Queue is empty";
	else
	{
		p = front;
		front=front->next;
		x = p->data;
		delete p;
	}
	return x;
}
int main()
{
	Queue<int> q;
	
	q.Enqueue(10);
	q.Enqueue(10);
	q.Enqueue(10);
	q.Enqueue(10);
	q.Enqueue(10);
	
	q.Display();
	return 0;
}
