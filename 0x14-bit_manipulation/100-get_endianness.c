/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	/* If the value at the first byte is 1, it means the system is little endian */
	/* Otherwise, it is big endian */
	return (int)byte[0];
}
