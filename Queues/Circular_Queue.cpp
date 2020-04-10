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
/*
	The below function is for enqueue, as the rear approaches the last, we can move it to the front by the statement in
	if, for rear less than the size, rear will keep moving forward but once it reaches the end, the condtion will become zero
	and it will move back to 0.
*/
void Queue<T>::enqueue(T x)
{
	if((rear + 1)%size == front)		
		cout<<"Queue Overflow";
	else
	{
		rear = (rear + 1)%size;
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
		front = (front + 1)%size;
		x = Q[front];
	}
	return x;
}
template<class T>
void Queue<T>::display()
{
	int i = front+1;
	/*
		Used do while because we need to print the last element too, if we used a while loop
		it wouldn't print the last element.
	*/
	do
	{
		cout<<Q[i]<<endl;
		i = (i+1)%size;
	}while(i!=(rear+1)%size);	
}

int main()
{ 
	Queue<int> q(10);
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	
	
	q.display();
	return 0;
}
