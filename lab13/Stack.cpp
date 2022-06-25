#include "Stack.h"
void StackInit(Stack* s, int len) //init stack
{
	if (s->sequence = (int*)malloc(sizeof(int) * len))
		s->len = len;
	else
		s->len = -1;
	s->head = -1;
}
void StackPush(Stack* s, int d)//Push element
{
	s->head++;
	if (s->head >= s->len)
	{
		s->len++;
		s->sequence = (int*)realloc(s->sequence, sizeof(int) * (s->head + 1));
	}
	s->sequence[s->head] = d;
}
int StackPull(Stack* s)//Pull element
{
	if (s->head > -1)
		return s->sequence[s->head--];
	return INT_MAX;
}
bool StackIsEmpty(Stack* const s)//check is stack empty
{
	return s->head == 0;
}
void StackClear(Stack* s) //clear stack
{
	s->head = -1;
}
void StackPrint(Stack* s)// print stack on screen
{
	for (int i = 0; i <= s->head; i++)
		printf("%i - ", s->sequence[i]);
	printf("\b\b \n");
}