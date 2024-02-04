int	simpleArraySum(int ar_count, int* ar)
{
	int	total;

	total = 0;
	ar_count--;
	while (ar_count >= 0)
	{
		total += ar[ar_count];
		ar_count--;
	}
	return (total);
}
