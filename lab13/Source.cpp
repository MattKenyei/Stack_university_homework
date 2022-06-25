#include "Stack.h"
void check(Stack* s)
{
	for (int i = 0; i < s->head; i++)
	{
		if ((i % 2 == 1 and s->sequence[i] % 2 == 1) or (i % 2 == 0 and s->sequence[i] % 2 == 0))
		{
			printf("Yes\n");
			break;
		}
		else
			printf("No\n");
	}
}

void lp()
{
	Stack mes;
	StackInit(&mes);
	int ch;
	int tmp;
	while (true)
	{
		printf("Choose:\n1)add number\n2)delete number\n3)Determine if it is true that the numbers on odd positions are even and the numbers on even positions are odd\n4)exit\n");
		do
		{
			scanf_s("%i", &ch);
		} while (ch < 1 || ch > 4);
		switch (ch)
		{
		case 1:
			printf("Input number");
			scanf_s("%i", &tmp);
			StackPush(&mes, tmp);
			break;
		case 2:
			if (!StackIsEmpty(&mes))
			{
				tmp = StackPull(&mes);
				printf("Removed number: %i\n", tmp);
			}
			else
				printf("Error! Empty Stack\n");
			break;
		case 3:
			check(&mes);
			break;
		case 4:
			return;
		}
		StackPrint(&mes);
	}
	StackClear(&mes);
}

int main()
{
	lp();
	system("pause");
	return 0;
}