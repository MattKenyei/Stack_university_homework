#pragma once
#ifndef _STACK_H
#define _STACK_H
#include <iostream>
struct el
{
	int sequence;
	el* next = NULL;
};
struct Stack
{
	el* head = NULL;
};

void push(Stack& s, int d);
int pull(Stack& s);
void print(Stack& s);
bool isEmpty(Stack s);
void clear(Stack& s);
#endif