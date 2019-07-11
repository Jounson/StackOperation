#pragma once
#ifndef _MYSTACK_H_
#define _MYSTACK_H_

typedef struct _Node
{
	char data;
	struct _Node* next;
}Node;
typedef struct _Stack
{
	Node* top;
}Stack;
void initStack(Stack*);
bool isStackFull(Stack* s);
bool isStackEmpty(Stack* s);
void push(Stack* s, char ch);
char pop(Stack* s);
void clearStack(Stack* s);
void resetStack(Stack* s);





#endif