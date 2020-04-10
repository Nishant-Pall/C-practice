#include<iostream>
using namespace std;

template<class T>
class Queue
{
	private:
		int size;
		int front;
		int rear;
		T *Q;
	public:
		Queue()
		{
			size = 10;
			front = rear = -1;
			Q = new T[size];
		}
		Queue(int size)
		{
			front = rear = -1;
			this->size = size;
			Q = new T[this->size];
		}
		void enqueue(T x);
		T dequeue();
		void display();
};
template<class T>
void Queue<T>::enqueue(T x)
{
	if(rear == size - 1)
		cout<<"Queue Overflow";
	else
	{
		rear++;
		Q[rear] = x;
	}
}
template<class T>
T Queue<T>::dequeue()
{
	T x = -1;
	if(rear = front)
		cout<<"Queue is Empty";
	else
	{
		front++;
		x = Q[front];
	}
	return x;
}
template<class T>
void Queue<T>::display()
{
	for(int i = front+1 ; i<=rear;i++)
		cout<<Q[i]<<endl;
}

int main()
{
	Queue<int> q(5);
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	
	
	q.display();
	return 0;
}
