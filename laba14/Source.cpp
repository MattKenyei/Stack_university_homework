#include "Stack.h"
void check(Stack& s)
{
	int i = 0;
	for (el* e = s.head; e; e = e->next, i++)
	{
		if ((i % 2 != 0 and e->sequence % 2 != 0) or (i % 2 == 0 and e->sequence % 2 == 0))
		{
			printf("No\n");
			return;
		}
	}
	printf("Yes\n");
}

void lp()
{
	Stack mes;
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
			push(mes, tmp);
			break;
		case 2:
			if (!isEmpty(mes))
			{
				tmp = pull(mes);
				printf("Removed number: %i\n", tmp);
			}
			else
				printf("Error! Empty Stack\n");
			break;
		case 3:
			check(mes);
			break;
		case 4:
			return;
		}
		print(mes);
	}
	clear(mes);
}

int main()
{
	lp();
	system("pause");
	return 0;
}