#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 else return 1
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int amt;
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int num_coin;
	int coin_cnt;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coin = 0;

	for (i = 0; i < 5; i++)
	{
		coin_cnt = amt / coins[i];
		num_coin += coin_cnt;
		amt -= coin_cnt * coins[i];
	}

	printf("%d\n", num_coin);
	return (0);
}
