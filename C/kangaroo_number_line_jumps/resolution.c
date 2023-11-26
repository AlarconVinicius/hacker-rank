/* --Resolution of the kangaroo problem-- */

char	*kangaroo(int x1, int v1, int x2, int v2)
{
	char	*yes = "YES";
	char	*no = "NO";
	int	i = x2 - x1;

	while (i > 0)
	{
		x1 += v1;
		x2 += v2;
		if (x1 == x2)
			return (yes);
		i--;
	}
	return (no);
}
