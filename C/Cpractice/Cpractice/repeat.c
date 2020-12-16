#include <stdio.h>

int while_repeat()
{
	int repeat_num = 1;
	while (repeat_num < 8)
	{
		printf("%d'th repeat is operating\n", repeat_num);
		repeat_num++;
	}
	return 0;
}

int do_while_repeat()
{
	int repeat_num = 0;
	do
	{
		repeat_num++;
		printf("%d'th repeat is operating \n", repeat_num);
	} while (repeat_num < 10);
	return 0;
}

int for_repeat()
{
	unsigned int length = 10; // type이 같아야 연산 가능
	for (size_t i = 0; i < length; i++)
	{
		printf("%d'th repeat is operating\n", i);
	}
	return 0;
}

int main() {
	while_repeat();
	do_while_repeat();
	for_repeat();
}