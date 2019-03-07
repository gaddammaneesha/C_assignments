extern int result;
float divx(int a, int b)
{
	if (b != 0)
	{
		result = (float)a / b;
		return result;
	}
	return -1;
}