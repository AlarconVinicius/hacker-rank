/* --Resolution of the cats and mouse problem-- */

char	*catAndMouse(int x, int y, int z)
{
	int	A;
	int	B;

	if ((z - x) < 0)
		A = (z - x) * -1;
	else
		A = z - x;
	if ((z - y) < 0)
		B = (z - y) * -1;
	else
		B = z - y;
	if (A == B)
		return ("Mouse C");
	else if (A < B)
		return ("Cat A");
	else
		return ("Cat B");
}
