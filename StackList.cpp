// StackList.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "pch.h"
#include <iostream>
#include"mystack.h"
using namespace std;

int main()
{
	Stack s;
	initStack(&s);
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		push(&s, ch);
	}
	//resetStack(&s);
	while (!isStackEmpty(&s))
	{
		printf("%3c", pop(&s));
	}
	clearStack(&s);
	return 0;
}