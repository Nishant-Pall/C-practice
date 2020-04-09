#include<iostream>
using namespace std;

class Queue
{
	private:
		int size;
		int front;
		int rear;
		int *Q;
	public:
		Queue()
		{
			size = 10;
			front = rear = -1;
			Q = new int[size];
		}
		Queue(int size)
		{
			front = rear = -1;
			this->size = size;
			Q = new int[this->size];
		}
		void enqueue(int x);
		int dequeue();
		void display();
};
void Queue::enqueue(int x)
{
	if(rear == size - 1)
		cout<<"Queue Overflow";
	else
	{
		rear++;
		Q[rear] = x;
	}
}
int Queue::dequeue()
{
	int x = -1;
	if(rear = front)
		cout<<"Queue is Empty";
	else
	{
		front++;
		x = Q[front];
	}
	return x;
}
void Queue::display()
{
	for(int i = front+1 ; i<=rear;i++)
		cout<<Q[i]<<endl;
}

int main()
{
	Queue q(5);
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	
	q.display();
	return 0;
}
