
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i] != '\0')
		{
			if (!check(s1[i], s1, NULL))
				write(1, &s1[i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

// loop first and check not in first then print if check is false
// do the same for second string except check both first and seccond
// one function passing in null the first time for the second string
// pass in char