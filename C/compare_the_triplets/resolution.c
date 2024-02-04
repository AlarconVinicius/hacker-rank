int	*compareTriplets(int a_count, int *a, int b_count, int *b, int *result_count)
{
	int	*arr;

	arr = malloc(sizeof(int) * 2);
	*result_count = 2;
	arr[0] = 0;
	arr[1] = 0;
	while (--a_count >= 0)
	{
		if (a[a_count] > b[a_count])
			arr[0]++;
		else if (a[a_count] < b[a_count])
			arr[1]++;
	}
	return (arr);
}
