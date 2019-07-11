#include"pch.h"
#include"mystack.h"
#include<stdlib.h>

void initStack(Stack* s)
{
	s->top = (Node*)malloc(sizeof(Node));
	s->top->next = NULL;
}
bool isStackFull(Stack* s) { return 0; }
bool isStackEmpty(Stack* s)
{
	return s->top->next == NULL;
}
/* ѹջ������������ջ��ѹ��ڵ� */
void push(Stack* s, char ch)
{
	Node* cur = (Node*)malloc(sizeof(Node));
	cur->data = ch;
	cur->next = s->top->next;
	s->top->next = cur;
}
/* ��ջ���������ڵ㵯�� */
char pop(Stack* s)
{
	/* ��ʼ��һ���������Ǽ�¼һ�� */
	Node* t = s->top->next;
	/* ��Ҫ�ͷ�t����Ҫ�������е����ݣ����Զ���һ������ch���ݴ�һ�£����ڷ��� */
	char ch = t->data;
	/* ���ڵ㵯���󣬰������������� */
	s->top->next = t->next;
	/* �ͷŵ���ջ�Ľڵ� */
	free(t);
	/* �����Ľڵ㣬���ڵ�����ݷ��� */
	return ch;
}
/* ���ջ��������ջ�ĺ��� */
void clearStack(Stack* s)
{
	/* �ڵ�ȫ��ѹ�� */
	resetStack(s);
	/* ��ʱ�����ڵ�ȫ��ѹ�����ͷŵ�ͷָ�� */
	free(s->top);
}
/* ��ջ�ָ�����ʼ״̬��һ���ڵ�Ҳû�� */
void resetStack(Stack* s)
{
	/* ֻҪ����Ϊ�գ��ͽ��ڵ�ѹ�� */
	while (!isStackEmpty(s))
	{
		pop(s);
	}
}