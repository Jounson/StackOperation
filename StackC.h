#pragma once
#ifndef _STACKC_H_
#define _STACKC_H_
#include<stdbool.h>

typedef struct _Stack
{
	int _len;
	int _top;
	char* _space;
}Stack;

void initStack(Stack* s,int size);
bool isStackFull(Stack* s);
bool isStackEmpty(Stack* s);
void push(Stack* s, char ch);
char pop(Stack* s);
void clearStack(Stack* s);
void resetStack(Stack* s);




#endif
