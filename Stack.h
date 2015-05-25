#ifndef Stack_H
#define Stack_H

typedef int Item;
typedef struct node * PNode;

typedef struct node
{
	Item data;
	PNode down;
}Node;

typedef struct stack
{
	PNode top;
	int size;
}Stack;

Stack *InitStack();


void DestroyStack(Stack *ps);


void ClearStack(Stack *ps);


int IsEmpty(Stack *ps);


int GetSize(Stack *ps);


PNode GetTop(Stack *ps,Item *pitem);


PNode Push(Stack *ps,Item item);


PNode Pop(Stack *ps,Item *pitem);


void StackTraverse(Stack *ps,void (*visit)());

#endif
