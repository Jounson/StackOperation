#include<stdio.h>
#include<string.h>
#include"StackC.h"
#include<iostream>
using namespace std;

/* ջ����ʽ�洢ʵ�� */
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
