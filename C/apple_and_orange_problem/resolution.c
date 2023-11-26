/* --Resolution apple and orange problem-- */

void	countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges)
{
	int	i;
	int	apple_num;
	int	orange_num;

	i = -1;
	apple_num = 0;
	orange_num = 0;
	while (++i < apples_count)
		if ((apples[i] + a) >= s && (apples[i] + a) <= t)
			apple_num++;
	i = -1;
	while (++i < oranges_count)
		if ((oranges[i] + b) >= s && (oranges[i] + b) <= t)
			orange_num++;
	
	printf("%i\n", apple_num);
	printf("%i\n", orange_num);
}
