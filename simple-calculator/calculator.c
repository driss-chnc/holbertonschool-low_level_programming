#include <stdio.h>
int main (void)
{
	int choice = 1;
	int a = 0;
	int b = 0;
	int result = 0;

	printf ("Simple Calculator\n");

	while (choice != 0)
		{
			if (choice < 5 && choice > -1)
			{
			printf ("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
			}
			printf ("choice ?\n");
			scanf ("%d",&choice);
			if (choice < 0 || choice > 4)
			{
				printf ("Invalid Choice!\n");
			}
			if (choice == 0)
			{
				printf ("Bye!");
			}
			if (choice == 1)
			{
				printf ("A: ");
				scanf ("%d", &a);
				printf ("B: ");
				scanf ("%d", &b);
				result = a + b;
				printf ("Result = %d\n", result);
			}
			if (choice == 2)
			{
				printf ("A: ");
				scanf ("%d", &a);
				printf ("B: ");
				scanf ("%d", &b);
				result = a - b;
				printf ("Result = %d\n", result);
			}
			if (choice == 3)
			{
				printf ("A: ");
				scanf ("%d", &a);
				printf ("B: ");
				scanf ("%d", &b);
				result = a * b;
				printf ("Result = %d\n", result);
			}
			if (choice == 4)
			{
				printf ("A: ");
				scanf ("%d", &a);
				printf ("B: ");
				scanf ("%d", &b);
				if (b == 0)
				{
					printf ("Error: division by zero\n");
					continue;
				}
				result = a / b;
				printf ("Result = %d\n", result);
			}

		}
		return (0);
}
