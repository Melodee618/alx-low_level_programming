/**
* swap_int - Swap the value of two integers using pointer
* @a: pointer
* @b: pointer
*
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
