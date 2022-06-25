#include "Stack.h"

void push(Stack& s, int d)
{
	el* e = (el*)malloc(sizeof(el));
	e->sequence = d;
	e->next = s.head;
	s.head = e;
}
int pull(Stack& s)
{
	if (s.head == NULL) return 0;
	int d = s.head->sequence;
	el* e = s.head;
	s.head = s.head->next;
	free(e);
	return d;
}
void print(Stack& s)
{
	for (el* cur = s.head; cur != NULL; cur = cur->next)
		printf("%i - ", cur->sequence);
	printf("\b\b \n");
}
bool isEmpty(Stack s)
{
	return s.head == 0;
}
void clear(Stack& s)
{
	while (!isEmpty(s))
		pull(s);
}