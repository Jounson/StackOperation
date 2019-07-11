#include<stdio.h>
#include<string.h>
#include"StackC.h"
#include<iostream>
using namespace std;

/* 栈的线式存储实现 */
int main()
{
	Stack s;
	initStack(&s, 100);
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		if (!isStackFull(&s))
			push(&s, ch);
	}
	while (!isStackEmpty(&s))
	{
		printf("%3c", pop(&s));
	}
	
	cout << endl;
	return 0;
}
