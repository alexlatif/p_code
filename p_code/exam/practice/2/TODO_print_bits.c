
https://github.com/fwuensche/42-exam-miner/blob/master/2-4-print_bits/subject.en.txt

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 01);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

void	print_bits2(unsigned char octet)
{
	int	i = 256;
	while (i = i >> 1)//101010 10101
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}



// mask goes through every bit 
// operators = AND  OR NOT Leftshift Rightshift XOR
// operators =  &   |  ~     <<        >>       ^ 


// byte is int until 255 = 8 bits

// & = res of and is 1 when both bits are 1

// | = res of 0 and 0 is zero, rest 1

// ~ = inverses bits


// var = 3

// var << 1 		output: 6 [3 x 2^1]  ...trailing pos filled with zeroa

// var = 3

// var >> 1		output: 1 0000 0011 -> 00000001
// 				"   " : 1 [3 / 2^1]



// 256 = 1000 0000

// while (i > 0)
// {
// 	if (octet & i)
// 		print (1);
// 	else
// 		print 0;
// 	i >> 1
// }