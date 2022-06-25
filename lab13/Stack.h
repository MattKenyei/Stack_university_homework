#ifndef _STACK_H
#define _STACK_H
#include<iostream>
struct Stack
{
	int* sequence;
	int len;
	int head;
};

void StackInit(Stack* s, int len = 0);
void StackPush(Stack* s, int d);
int StackPull(Stack* s);
void StackClear(Stack* s);
bool StackIsEmpty(Stack* s);
void StackPrint(Stack* const s);
#endif