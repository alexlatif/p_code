#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

int		ft_is_num(char ch)
{
	if ((ch >= '0') && (ch <= '9'))
		return (1);
	return (0);
}

#include "sastantua.c"

int 	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv[1];
	sastantua(1);
	return (0);
}	
