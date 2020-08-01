#include <bits/stdc++.h>
#include <stack>
#include <queue>
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
	Node *root; //Keeping it private so no one can change the root of the tree
	int minimum(Node *p);
	int maximum(Node *p);

public:
	Tree() { root = NULL; }
	void CreateTree();
	void Preorder() { Preorder(root); } //Calling the function below passing root as parameter
	void Preorder(Node *p);
	void Postorder() { Postorder(root); } //Calling the function below passing root as parameter
	void Postorder(Node *p);
	void Inorder() { Inorder(root); } //Calling the function below passing root as parameter
	void Inorder(Node *p);
	void Levelorder() { Levelorder(root); } //Calling the function below passing root as parameter
	void Levelorder(Node *p);
	bool isBST() { return isBST(root); }
	bool isBST(Node *root);
	Node *Search(int key) { return Search(root, key); }
	Node *Search(Node *p, int key);
	Node *RecursiveInsert(int key) { return RecursiveInsert(root, key); }
	Node *RecursiveInsert(Node *p, int key);
	Node *Delete(int key) { return Delete(root, key); }
	Node *Delete(Node *p, int key);
	Node *InPre() { return InPre(root); }
	Node *InPre(Node *p);
	Node *InSucc() { return InSucc(root); }
	Node *InSucc(Node *p);
	void Insert(int key);
	int Height() { return Height(root); } //Calling the function below passing root as parameter
	int Height(Node *p);
	int Count() { return Count(root); }
	int Count(Node *p);
	int CountDegree2() { return CountDegree2(root); }
	int CountDegree2(Node *p);
	int Sum() { return Sum(root); }
	int Sum(Node *p);
};
void Tree::CreateTree()
{
	Node *p, *t = NULL;
	int x;
	queue<Node *> q;
	printf("Enter root value :");
	scanf("%d", &x);
	root = new Node;
	root->data = x;
	root->lchild = root->rchild = NULL;
	q.push(root); //adding root address to the queue
	while (!q.empty())
	{
		p = q.front();
		q.pop(); //extracts the first element in the queue and assigns it to p
		printf("enter lchild child of %d :", p->data);
		scanf("%d", &x);
		if (x != -1) //check if node has lchild child or not
		{
			t = new Node;
			t->data = x;
			t->lchild = t->rchild = NULL;
			p->lchild = t; //making parent point on it
			q.push(t);	   //adding the address to queue
		}
		printf("enter rchild child of %d :", p->data);
		scanf("%d", &x);
		if (x != -1)
		{
			t = new Node;
			t->data = x;
			t->lchild = t->rchild = NULL;
			p->rchild = t;
			q.push(t);
		}
	}
}
int maximum(Node *root)
{
	if (root == NULL)
	{
		return INT_MIN;
	}
	return max(root->data, max(maximum(root->lchild), maximum(root->rchild)));
}
int minimum(Node *root)
{
	if (root == NULL)
	{
		return INT_MAX;
	}
	return min(root->data, min(minimum(root->lchild), minimum(root->rchild)));
}
bool Tree::isBST(Node *root)
{
	if (root == NULL)
	{
		return true;
	}

	int lchildMax = maximum(root->lchild);
	int rchildMin = minimum(root->rchild);
	bool output = (root->data > lchildMax) && (root->data <= rchildMin) && isBST(root->lchild) && isBST(root->rchild);
	return output;
}
Node *Tree::Search(Node *p, int key)
{
	while (p)
	{
		if (key == p->data)
			return p;
		if (key > p->data)
			p = p->rchild;
		else
			p = p->lchild;
	}
	return NULL;
}
Node *Tree::RecursiveInsert(Node *p, int key)
{
	Node *t;
	if (p == NULL)
	{
		t = new Node;
		t->data = key;
		t->lchild = t->rchild = NULL;
	}
	if (key < p->data)
		p->lchild = RecursiveInsert(p->lchild, key);
	else if (key > p->data)
		p->rchild = RecursiveInsert(p->rchild, key);
	return t;
}
void Tree::Insert(int key)
{
	Node *r = NULL;		// tailing pointer
	Node *t = root;		// searching pointer
	Node *p = new Node; // for inserting new node
	while (t)
	{
		r = t;
		if (key == t->data)
			return;
		else if (key > t->data)
			t = t->rchild;
		else
			t = t->lchild;
	}
	p->data = key;
	p->lchild = p->rchild = NULL;
	if (p->data < r->data)
		r->lchild = p;
	else
		r->rchild = p;
}
Node *Tree::Delete(Node *p, int key)
{
	Node *q;
	if (p == NULL)
		return NULL;
	if (p->rchild == NULL && p->lchild == NULL)
	{
		if (p == root)
			root = NULL;
		delete p;
		return NULL;
	}
	if (key < p->data)
		p->lchild = Delete(p->lchild, key);
	else if (key > p->data)
		p->rchild = Delete(p->rchild, key);
	else
	{
		if (Height(p->lchild) > Height(p->rchild))
		{
			q = InPre(p->lchild);
			p->data = q->data;
			p->lchild = Delete(p->lchild, q->data);
		}
		else
		{
			q = InSucc(p->rchild);
			p->data = q->data;
			p->rchild = Delete(p->rchild, q->data);
		}
	}
}
void Tree::Preorder(struct Node *p)
{
	if (p)
	{
		printf("%d ", p->data); //prints data
		Preorder(p->lchild);	//calls the function again upon the lchild child
		Preorder(p->rchild);	//calls the function again upon the rchild child
	}
}
void Tree::Inorder(struct Node *p)
{
	if (p)
	{
		Inorder(p->lchild); //calls the function again upon the lchild child
		printf("%d ", p->data);
		Inorder(p->rchild); //calls the function again upon the rchild child
	}
}
void Tree::Postorder(struct Node *p)
{
	if (p)
	{
		Postorder(p->lchild); //calls the function again upon the lchild child
		Postorder(p->rchild); //calls the function again upon the rchild child
		printf("%d ", p->data);
	}
}
void Tree::Levelorder(struct Node *root)
{
	queue<Node *> q;
	printf("%d ", root->data);
	q.push(root);
	while (!q.empty())
	{
		root = q.front();
		q.pop();
		if (root->lchild)
		{
			printf("%d ", root->lchild->data);
			q.push(root->lchild);
		}
		if (root->rchild)
		{
			printf("%d ", root->rchild->data);
			q.push(root->rchild);
		}
	}
}
int Tree::Count(Node *p)
{
	int x, y;
	if (p)
	{
		x = Count(p->lchild);
		y = Count(p->rchild);
		return x + y + 1;
	}
	return 0;
}
int Tree::CountDegree2(Node *p)
{
	int x, y;
	if (p)
	{
		x = CountDegree2(p->lchild);
		y = CountDegree2(p->rchild);
		if (p->lchild && p->rchild)
			return x + y + 1;
		else
			return 0;
	}
	return 0;
}
int Tree::Sum(Node *p)
{
	int x, y;
	if (p)
	{
		x = Sum(p->lchild);
		y = Sum(p->rchild);
		return x + y + p->data;
	}
	return 0;
}
int Tree::Height(struct Node *p)
{
	int x = 0, y = 0;
	if (p == 0)
		return 0;
	x = Height(p->lchild);
	y = Height(p->rchild);
	if (x > y)
		return x + 1;
	else
		return y + 1;
}
Node *Tree::InPre(Node *p)
{
	while (p && p->lchild)
		p = p->lchild;
	return p;
}
Node *Tree::InSucc(Node *p)
{
	while (p && p->rchild)
		p = p->rchild;
	return p;
}
int main()
{
	Node *temp;
	int key;
	Tree t;
	t.CreateTree();
	cout << endl
		 << endl;
	t.Inorder();
	cout << endl;
	cout << "Enter Key to search:";
	cin >> key;
	temp = t.Search(key);
	if (temp)
		cout << "Key Found:" << temp->data;
	else
		cout << "Not Found";
	cout << endl;
	cout << "Inserting key";
	t.Insert(key);
	t.Inorder();
	return 0;
}
