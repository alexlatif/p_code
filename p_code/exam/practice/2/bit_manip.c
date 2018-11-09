
#include <unistd.h>

// & - only 1 & 1 = 1
// | - either a 1 = 1, only 0 & 0 = 0
// ~ - opposite

void print_bits(unsigned char octet)
{
	int i;

	i = 256;
	while (i)
	{
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
		i = i >> 1;
	}
}

// this is how you print them
void reverse_print_bits(unsigned char octet)
{
	int i;

	i = 1;
	while (i <= 256)
	{
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
		i = i << 1;
	}
}

//but we need the actual char returned
unsigned char reverse_bits(unsigned char octet)
{
	unsigned char	res;
	unsigned		len;

	res = 0;
	len = 8;
	while (len--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return (res);
}
// shifting an initially empty zero result
// mask and evaluator is as start with binary of 1
// only if at the mark if the octect is one then the blank result becomes one
// with the either operator and the result shifts left to give a black canvas at that point
// so it stores the whole usigned char in reverse


unsigned char swap_bits(unsigned char c)
{
	return ( c << 4 | c >> 4);
}
// shifting 4 bits left and 4 bits right at the same time
// each result will contain an all zero part and the either operator
// allows there to be the assignment of the information block