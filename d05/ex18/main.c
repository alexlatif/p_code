#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

// use atoi, sizeof, etc in main

#include "ft_strncat.c"

int 	main()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test, "", 16));
	printf("%s\n", ft_strncat(test, "qwerty", 0));
	printf("%s\n", ft_strncat(test, "asdf", 3));
	return (0);
}
