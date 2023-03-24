/**
 * _isdigit - ASCII range  97-122 / 65-90
 * @c: the char to evaluate
 * Return: 0 , 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
