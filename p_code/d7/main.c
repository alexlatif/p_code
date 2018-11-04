#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


// #include "ex00/ft_strdup.c"
// #include "ex01/ft_range.c"
// #include "ex02/ft_ultimate_range.c"
#include "ex03/ft_concat_params.c"
#include "ex04/ft_split_whitespaces.c"
// #include "ex05/ft_print_words_tables.c"
// #include "ex06/ft_convert_base.c"
// #include "ex07/ft_split.c"

void	lcl_putstr(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		printf("%s", tab[i++]);
	printf("%s", tab[i]);
}


int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("need to pass arg for test num");
		return (0);
	}

	// test if they dont compare
	printf("$$$$$$$$TESTING: %s $$$$$$$$$$$$$\n\n", argv[1]);
	printf("TEST TEST AND TEST AGAIN\n\n");
	printf("TESTING IS LIFE\n\n");
	printf("YOU ARE A BEAST\n\n");

	// if (!strcmp(argv[1], "0") || !strcmp(argv[1], "a"))
	// {
	// 	printf("\n--->>EX00 - ft_strdup - malloc & copy string\n\n");
	// 	char *str = malloc(6);
		

	// 	str = "hello";
	// 	printf("TEST 1\n");
	// 	printf("string_hello: %s\n\n", ft_strdup(str));

	// 	char *str1 = "";
	// 	printf("TEST 2\n");
	// 	printf("string2_empt: %s\n\n", ft_strdup(str1));
	// }

	// printf("------------------------------------------------\n");

	// if (!strcmp(argv[1], "1") || !strcmp(argv[1], "a"))
	// {
	// 	printf("\n--->>EX01 - ft_range - malloc (max - min) to arr & inlclude nums up to and excluding max\n\n");
	// 	printf("TEST1 - 1-9\n");
	// 	int max = 9;
	// 	int min = 1;
	// 	int* arr;
	// 	int i = 0;
	// 	int len;

	// 	arr = ft_range(min, max);
	// 	len = (int)( sizeof(arr) / sizeof(arr[0]));
	// 	printf("array point: %p\n", arr);
	// 	printf("array: ");
	// 	while (i < (max - min))
	// 	{
	// 		printf("%d", arr[i]);
	// 		i++;
	// 	}
	// 	if (arr[len] == 9)
	// 		printf("not supposed to include max\n");
	// 	printf("\n\n");

	// 	printf("TEST2 - 9-8\n");
	// 	int max1 = 8;
	// 	int min1 = 9;
	// 	int* arr1;
	// 	int len1;

	// 	arr1 = ft_range(min1, max1);
	// 	len1 = (int)( sizeof(arr) / sizeof(arr1[0]));
	// 	printf("array point: %p\n", arr1);
	// 	if (arr1 == NULL)
	// 		printf("correctly returned null");
	// 	printf("\n\n");
	// }

	// printf("------------------------------------------------\n");

	// if (!strcmp(argv[1], "2") || !strcmp(argv[1], "a"))
	// {
	// 	printf("\n--->>EX02 - ft_ultimate_range - allocating size to array of max - min returning the diff but have pointer point to first element of new array || array of int within an array\n");
	// 	int     max = 9;
	// 	int     min = 1;
	// 	int     *ptr;
	// 	int     res;
	// 	int     i;

	// 	printf("TEST 1 - 1-9\n");
	// 	i = 0;
	// 	res = ft_ultimate_range(&ptr, min, max);
	// 	printf("range: %d\n", res);
	// 	printf("numbers\n");
	// 	while (min++ < max)
	// 		printf("%d\n", ptr[i++]);
	// 	printf("\n");
	// 	printf("\n");

	// 	int     max1 = 8;
	// 	int     min1 = 8;
	// 	int     *ptr1;
	// 	int     res1;
	// 	int     i1;
	// 	printf("TEST 2 - 9-8\n");

	// 	i1 = 0;
	// 	res1 = ft_ultimate_range(&ptr1, min1, max1);
	// 	printf("range: %d\n", res1);
	// 	printf("numbers\n");
	// 	while (min1++ < max1)
	// 		printf("%d\n", ptr1[i++]);
	// 	printf("\n");
	// }

	printf("------------------------------------------------\n");
	
	if (!strcmp(argv[1], "3") || !strcmp(argv[1], "a"))
	{
		printf("\n--->>EX03 - ft_concat_params - concats args when running program\n");
		
		int     ac = argc;
		char**  av = argv;
		char*   res;

		res = ft_concat_params(ac, av);
		printf("concated params: %s", res);
	}

	printf("------------------------------------------------\n");
	
	if (!strcmp(argv[1], "4") || !strcmp(argv[1], "a"))
	{
		printf("\n--->>EX04 - ft_split_whitespaces - splits words by whitespace and makes separate words\n");
		
		char*   str1 = "asdf qwerty zxcv"; // 3 words + 0
		// char*   str2 = "this, is by. no		means\naccepted now"; // 7 words + 0
		// char*   str3 = ""; //0
		char  **res1;
		// char**  res2;
		// char**  res3;

		//res1 = ft_split_whitespaces(str1);
		for (res1 = ft_split_whitespaces(str1); *res1 != 0; res1++)
			printf("'%s',", *res1);
		printf("\n");

		for (res1 = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res1 != 0; res1++)
			printf("'%s',", *res1);
		printf("\n");

		// lcl_putstr(res1);
		// res2 = ft_split_whitespaces(str2);
		// //ft_print_words_tables(res2);
		// res3 = ft_split_whitespaces(str3);
		//ft_print_words_tables(res3);
	}
	
	return (0);
}
