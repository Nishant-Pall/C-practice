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
		 int Height(Node *root);
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
int Tree::Height(struct Node *root)
{

	 int x=0,y=0;
	 if(root==0)
		 return 0;
	 x=Height(root->lchild); y=Height(root->rchild);
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
 return 0;
}
