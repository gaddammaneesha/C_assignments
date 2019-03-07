extern int result;
int division(int a, int b)
{
	if (b != 0)
	{
		result = a / b;
		return result;
	}
	return -1;
}