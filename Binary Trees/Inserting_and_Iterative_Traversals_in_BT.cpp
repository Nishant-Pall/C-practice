#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node
{
	public:
		Node *lchild;
		Node *rchild;
		int data;
};
class Tree
{
	Node *root;
	public:
		Tree(){root=NULL;}
		void CreateTree();
		void Preorder(){Preorder(root);}  //Calling the function below passing root as parameter
		void Preorder(Node *p);		   
		void Postorder(){Postorder(root);} //Calling the function below passing root as parameter
		void Postorder(Node *p);
		void Inorder(){Inorder(root);} //Calling the function below passing root as parameter
		void Inorder(Node *p);
		void Levelorder(){Levelorder(root);}
		void Levelorder(Node *p);
};
void Tree::CreateTree()
{
	Node *p,*t=NULL;
	int x;
	queue<Node*> q;
	cout<<"Enter Root value of tree:";
	cin>>x;
	root = new Node;
	root->data = x;
	root->lchild=root->rchild=0;
	q.push(root);
	while(!q.empty())
	{
		cout<<"Enter left child value:";
		cin>>x;
		if(x!=-1)
		{
		t = new Node;
		p=q.front();
		q.pop();
		t->data=x;
		t->lchild=t->rchild=NULL;
		p->lchild=t;
		q.push(t);
		}
		cout<<"Enter right child value:";
		cin>>x;
		if(x!=-1)
		{
		t = new Node;
		p=q.front();
		q.pop();
		t->data=x;
		t->lchild=t->rchild=NULL;
		p->rchild=t;
		q.push(t);
		}
	}	
}
void Tree::Preorder(Node *p)
{
	stack<Node*> st;
	while(p || !st.empty())
	{
		if(p)
		{
			cout<<p->data;
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.top();
			st.pop();
			p=p->rchild;
		}
	}
}
void Tree::Inorder(Node *p)
{
	stack<Node*> st;
	while(p || !st.empty())
	{
		if(p)
		{
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.top();
			st.pop();
			cout<<p->data;
			p=p->rchild;
		}
	}
}
void Tree::Postorder(Node *p)
{
	long int temp;
	stack<long int> st;
	while(p || !st.empty())
	{
		if(p)
		{
			st.push((long int)p);
			p=p->lchild;
		}
		else
		{
			temp=st.top();
			st.pop();
			if(temp>0)
			{
				st.push(-temp);
				p=((Node*)temp)->rchild;
			}
			else
			{
				cout<<((Node*)(-1*temp))->data;
				p=NULL;
			}
		}
	}	
}
void Tree::Levelorder(Node*p)
{
	queue<Node*> q;
	cout<<p->data;
	q.push(p);
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		if(p->lchild)
		{
			cout<<p->lchild->data;
			q.push(p->lchild);
		}
		if(p->rchild)
		{
			cout<<p->rchild->data;
			q.push(p->rchild);
		}
	}
}
int main()
{
	Tree t;
	t.CreateTree();
	return 0;
}
