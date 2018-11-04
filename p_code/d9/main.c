
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "ex00/ft_generic.c"
#include "ex01/ft_takes_place.c"
#include "ex04/ft_rot42.c"

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

	if (!strcmp(argv[1], "0") || !strcmp(argv[1], "a"))
	{
		ft_generic();
	}

	printf("------------------------------------------------\n");

	if (!strcmp(argv[1], "1") || !strcmp(argv[1], "a"))
	{
		ft_takes_place(atoi(argv[2]));
	}

	printf("------------------------------------------------\n");

	if (!strcmp(argv[1], "2") || !strcmp(argv[1], "a"))
	{
		printf("\n--->>EX02 - \n");
		char str[5] = "hello";
		ft_rot42(str);
	}

	printf("------------------------------------------------\n");
	
	if (!strcmp(argv[1], "3") || !strcmp(argv[1], "a"))
	{
		printf("\n--->>EX03 - \n");

	}

	printf("------------------------------------------------\n");
	
	if (!strcmp(argv[1], "4") || !strcmp(argv[1], "a"))
	{
		printf("\n--->>EX04 - \n");
	}
	
	return (0);
}
