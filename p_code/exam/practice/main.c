
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#include "2/ft_strdup.c"

int		main(void)
{
	printf("%s\n", ft_strdup("booking.com"));
	printf("%s\n", ft_strdup(""));
	printf("std: %s\n", strdup("booking.com"));
	printf("std: %s\n", strdup(""));
}

// #include "2/ft_strcmp.c"

// int		main(void)
// {
// 	printf("%d\n", ft_strcmp("booking", "booking.com"));
// 	printf("%d\n", strcmp("booking", "booking.com"));
// }

// #include "2/is_power_of_2.c"

// void	print_arr(int *arr)
// {
// 	while(*arr)
// 		printf("%d", *arr++);
// }

// int		main(void)
// {
// 	printf("%d", is_power_of_2(8589934592));
// }


// #include "3/ft_rrange.c"

// void	print_arr(int *arr)
// {
// 	while(*arr)
// 		printf("%d", *arr++);
// }

// int		main(void)
// {
// 	int *a;
// 	a = ft_rrange(1, 3);
// 	printf("num: %d", a[0]);
// 	printf("num: %d", a[1]);
// 	printf("num: %d", a[2]);
// 	printf("\n");
// 	a = ft_rrange(-1, 2);
// 	printf("num: %d", a[0]);
// 	printf("num: %d", a[1]);
// 	printf("num: %d", a[2]);
// 	printf("num: %d", a[3]);
// 	printf("\n");
// 	a = ft_rrange(0, 0);
// 	printf("num: %d", a[0]);
// 	printf("\n");
// 	a = ft_rrange(0, -3);
// 	printf("num: %d", a[0]);
// 	printf("num: %d", a[1]);
// 	printf("num: %d", a[2]);
// 	printf("num: %d", a[3]);
// 	printf("\n");
// }

// #include "0/ft_print_numbers.c"

// int		main(void)
// {
// 	ft_print_numbers();
// }

// #include "2/ft_atoi.c"

// int		main(void)
// {
// 	printf("test-534: %d\n", ft_atoi(" \t\v\r\f\n  -2147483648"));
// 	printf("STDtest-534: %d\n", atoi(" \t\v\r\f\n  -2147483648"));
// }

// #include "1/ft_swap.c"

// int		main(void)
// {
// 	// a:1 b:2 -> a:2 b:1
// 	int	a = 1;
// 	int b = 2;
// 	int *ptr1 = &a;
// 	int *ptr2 = &b;

// 	printf("a: %d b: %d ", a, b);
// 	ft_swap(ptr1, ptr2);
// 	printf("a: %d b: %d ", a, b);
// }

// #include "1/ft_strcpy.c"

// int		main(void)
// {
// 	// src greater than dst -> hello
// 	char src[] = "hello";
// 	char dest[] = "bye";
// 	printf("output1: %s\n", ft_strcpy(dest, src));	

// 	// src empty -> \0
// 	char src1[] = "";
// 	char dest1[] = "bye";
// 	printf("output1: %s\n", ft_strcpy(dest1, src1));

// 	// dst greater than src -> bye
// 	char src2[] = "bye";
// 	char dest2[] = "hello";
// 	printf("output1: %s\n", ft_strcpy(dest2, src2));
// }
