#include <iostream>
using namespace std;

class Node
{
	public:
		Node *lchild;
 		int data;
 		Node *rchild;
};
class Queue 
{
	private:
		 int front;
		 int rear;
		 int size;
		 Node **Q;
	public:
		 Queue(){front=rear=-1;size=10;Q=new Node*[size];}
		 Queue(int size){front=rear=-1;this->size=size;;Q=new
			Node*[size];}
 		 void enqueue(Node *x);
 		 Node *dequeue();
		 int isEmpty(){ return front==rear;}
};
void Queue::enqueue(Node *x)
{
	 if(rear==size-1)
 		printf("Queue Full\n");
 	 else
 	{
 		rear++;
 		Q[rear]=x;
 	}
}
Node *Queue::dequeue()
{
	 Node *x=NULL;
	 if(front==rear)
		 printf("Queue is Empty\n");
	 else
	 {
		 x=Q[front+1];
		 front++;
	 }
 	 return x;
}
class Tree
{
	 Node *root;          //Keeping it private so no one can change the root of the tree
	public:
		 Tree(){root=NULL;}
		 void CreateTree();
 		 void Preorder(){Preorder(root);}  //Calling the function below passing root as parameter
		 void Preorder(Node *p);		   
		 void Postorder(){Postorder(root);} //Calling the function below passing root as parameter
		 void Postorder(Node *p);
		 void Inorder(){Inorder(root);} //Calling the function below passing root as parameter
		 void Inorder(Node *p);
		 void Levelorder(){Levelorder(root);} //Calling the function below passing root as parameter
		 void Levelorder(Node *p);
		 int Height(){return Height(root);} //Calling the function below passing root as parameter
		 int Height(Node *p);
		 int Count(){return Count(root);}
		 int Count(Node*p);
		 int CountDegree2(){return CountDegree2(root);}
		 int CountDegree2(Node*p);
		 int Sum(){return Sum(root);}
		 int Sum(Node *p);
		 
};
void Tree::CreateTree()
{
	 Node *p,*t=NULL;
	 int x;
	 Queue q;
	 printf("Enter root value :");
	 scanf("%d",&x);
	 root=new Node; 
	 root->data=x;
	 root->lchild=root->rchild=NULL;
	 q.enqueue(root);        //adding root address to the queue
	 while(!q.isEmpty())
	 {
		 p=q.dequeue();           //extracts the first element in the queue and assigns it to p
		 printf("enter left child of %d :",p->data);
		 scanf("%d",&x);
 		if(x!=-1)				//check if node has left child or not
 		{
 			t=new Node;
			 t->data=x;
			 t->lchild=t->rchild=NULL;     
			 p->lchild=t;		//making parent point on it
			 q.enqueue(t);		//adding the address to queue
		}
		 printf("enter right child of %d :",p->data);
		 scanf("%d",&x);
		 if(x!=-1)
		 {
			 t=new Node;
			 t->data=x;
			 t->lchild=t->rchild=NULL;
			 p->rchild=t;
			 q.enqueue(t);
		 }
	 }
}
void Tree::Preorder(struct Node *p)
{
	 if(p)
	 {
		 printf("%d ",p->data);    //prints data
		 Preorder(p->lchild);	   //calls the function again upon the left child
		 Preorder(p->rchild);	   //calls the function again upon the right child
	 }
}
void Tree::Inorder(struct Node *p)
{
	 if(p)
	 {
		 Inorder(p->lchild);	//calls the function again upon the left child
		 printf("%d ",p->data);
		 Inorder(p->rchild); 	//calls the function again upon the right child
	 }
}
void Tree::Postorder(struct Node *p)
{
 	if(p)
 	{
		 Postorder(p->lchild);	//calls the function again upon the left child
		 Postorder(p->rchild); //calls the function again upon the right child
		 printf("%d ",p->data);
	 }
}
void Tree::Levelorder(struct Node *p)
 {
	 Queue q;
	 printf("%d ",root->data);
	 q.enqueue(root);
	 while(!q.isEmpty())
	 {
		 q.enqueue(root);
		 if(root->lchild)
		 {
			 printf("%d ",root->lchild->data);
			 q.enqueue(root->lchild);
		 }
		 if(root->rchild)
		 {
			 printf("%d ",root->rchild->data);
			 q.enqueue(root->rchild);
		 }
	 }
}
int Tree::Count(Node *p)
{
	int x,y;
	if(p)
	{
		x = Count(p->lchild);
		y = Count(p->rchild);
		return x+y+1;
	}
	return 0;
}
int Tree::CountDegree2(Node *p)
{
	int x,y;
	if(p)
	{
		x = CountDegree2(p->lchild);
		y = CountDegree2(p->rchild);
		if(p->lchild&&p->rchild)
			return x+y+1;
		else
			return 0;
	}
	return 0;
}
int Tree::Sum(Node *p)
{
	int x,y;
	if(p)
	{
		x = Sum(p->lchild);
		y = Sum(p->rchild);
		return x+y+p->data;
	}
	return 0;
}
int Tree::Height(struct Node *p)
{
	 int x=0,y=0;
	 if(p==0)
		 return 0;
	 x=Height(p->lchild);
	 y=Height(p->rchild);
	 if(x>y)
		 return x+1;
	 else
		 return y+1;
}
int main() 
{
	 Tree t;
	 t.CreateTree();
	 cout<<"Preorder ";
	 t.Preorder();
	 cout<<endl;
	 cout<<"Inorder ";
	 t.Inorder();
	 cout<<endl<<endl;
	 cout<<"Height of Binary Tree:"<<t.Height()<<endl;
	 cout<<"Sum of all elements:"<<t.Sum()<<endl;
	 cout<<"Number of Nodes:"<<t.Count()<<endl;
	 cout<<"Number of Nodes with Degree 2:"<<t.CountDegree2()<<endl;
 return 0;
}
