#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
	int amt = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;
	int coin_cnt = 0;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amt > i && i < 5)
	{
		int nums_cnt = amt / coins[i];
		coin_cnt += nums_cnt;
		amt = amt % coins[i];
		i++;
	}

	printf("%d", coin_cnt);
	return (0);
}
