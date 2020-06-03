#ifndef Chains_h
#define Chains_h
#include<stdlib.h>
struct Node
{
	 int data;
	 struct Node *next;
};
void SortedInsert(struct Node **H,int x)
{
	 struct Node *t,*q=NULL,*p=*H;

	 t=(struct Node*)malloc(sizeof(struct Node));
	 t->data=x;
	 t->next=NULL;

	 if(*H==NULL)	//if the list has no nodes
		 *H=t;
	 else
	 {
		 while(p && p->data<x)
		 {
			 q=p;
			 p=p->next;
		 }
		 if(p==*H)		// if p remains at head means the key is smallest in the list
		 {
			 t->next=*H;
			 *H=t;
		 }	
		 else			// add the new node in that position
		 {
			 t->next=q->next;
			 q->next=t;
		 }
	 }
}
struct Node *Search(struct Node *p,int key)
{
	 while(p!=NULL)
	 {
		 if(key==p->data)
		 {
			 return p;
		 }
		 p=p->next;
	 }
 return NULL;
}
#endif /* Chains_h */