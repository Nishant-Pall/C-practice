#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class Node
{
	public:
		Node *lchild;
 		int data;
 		Node *rchild;
};
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
		 Node* Search(int key){return Search(root,key);}
		 Node* Search(Node* p, int key);
		 Node* RecursiveInsert(int key){return RecursiveInsert(root,key);}
		 Node*RecursiveInsert(Node* p, int key);
		 void Insert(int key);
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
	 queue<Node*> q;
	 printf("Enter root value :");
	 scanf("%d",&x);
	 root=new Node; 
	 root->data=x;
	 root->lchild=root->rchild=NULL;
	 q.push(root);        //adding root address to the queue
	 while(!q.empty())
	 {
		 p=q.front();
		 q.pop();           //extracts the first element in the queue and assigns it to p
		 printf("enter left child of %d :",p->data);
		 scanf("%d",&x);
 		if(x!=-1)				//check if node has left child or not
 		{
 			 t=new Node;
			 t->data=x;
			 t->lchild=t->rchild=NULL;     
			 p->lchild=t;		//making parent point on it
			 q.push(t);		//adding the address to queue
		}
		 printf("enter right child of %d :",p->data);
		 scanf("%d",&x);
		 if(x!=-1)
		 {
			 t=new Node;
			 t->data=x;
			 t->lchild=t->rchild=NULL;
			 p->rchild=t;
			 q.push(t);
		 }
	 }
}
Node* Tree::Search(Node* p,int key)
{
	while(p)
	{
		if(key==p->data)
			return p;
		if(key > p->data)
			p=p->rchild;
		else
			p=p->lchild;
	}
	return NULL;
}
Node* Tree::RecursiveInsert(Node* p, int key)
{
	Node* t;
	if(p==NULL)
	{
		t = new Node;
		t->data = key;
		t->lchild = t->rchild = NULL;
	}
	if(key<p->data)
		p->lchild = RecursiveInsert(p->lchild, key);
	else if(key>p->data)
		p->rchild = RecursiveInsert(p->rchild, key);
	return t;
}
void Tree::Insert(int key)
{
	Node* r = NULL;		  // tailing pointer
	Node* t = root;		 // searching pointer
	Node* p = new Node;  // for inserting new node
	while(t)
	{
		r = t;
		if(key==t->data)
			return;
		else if(key > t->data)
			t = t->rchild;
		else
			t = t->lchild;
	}
	p->data = key;
	p->lchild = p->rchild = NULL;
	if(p->data < r->data)
		r->lchild = p;
	else
		r->rchild = p;	
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
void Tree::Levelorder(struct Node *root)
 {
	 queue<Node*> q;
	 printf("%d ",root->data);
	 q.push(root);
	 while(!q.empty())
	 {
		 root=q.front();
		 q.pop();
		 if(root->lchild)
		 {
			 printf("%d ",root->lchild->data);
			 q.push(root->lchild);
		 }
		 if(root->rchild)
		 {
			 printf("%d ",root->rchild->data);
			 q.push(root->rchild);
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
	Node* temp;
	int key;
	Tree t;
	t.CreateTree();
	cout<<endl<<endl;
	t.Inorder();
	cout<<endl;
	cout<<"Enter Key to search:";
	cin>>key;
	temp = t.Search(key);
	if(temp)
	 	cout<<"Key Found:"<<temp->data;
	else
		cout<<"Not Found";
	cout<<endl;
	cout<<"Inserting key";
	t.Insert(key);
	t.Inorder();
 	return 0;
}
