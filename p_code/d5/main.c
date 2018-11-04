#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


// #include "ex19/ft_strlcpy.c"

// int main(void)
// {
// 	int a;

// 	char src[] = "hello";
// 	char dest[] = "bye";
// 	a = ft_strlcpy(dest, src, 0);

// 	printf("outnum: %d dest: %s, src: %s\n", a, dest, src);

// 	char srcSL[] = "hello";
// 	char destSL[] = "bye";
// 	a = strlcpy(destSL, srcSL, 0);

// 	printf("SLoutnum: %d destSL: %s, src2SL: %s\n", a, destSL, srcSL);

	// char string3[100] = "string1 is a string yeah 1 d \n2 e";
	// char string4[] = "none-some+more!most2";
	// a = ft_strlcpy(string3, string4, 12);

	// printf("%d String3: %s, String4: %s\n", a, string3, string4);

	// char string3SL[100] = "string1 is a string yeah 1 d \n2 e";
	// char string4SL[] = "none-some+more!most2";
	// a = strlcpy(string3SL, string4SL, 12);

	// printf("%d String3SL: %s, String4SL: %s\n", a, string3SL, string4SL);

	// char string5[20] = "string1";
	// char string6[] = "none-some+more!";
	// a = ft_strlcpy(string5, string6, 0);

	// printf("%d String5: %s, String6: %s\n", a, string5, string6);
	// printf("String5 8th char: %c", string5[7]);
	// if (string5[12] == '\0')
	// 	printf("   \\0\n");

	// char string5SL[20] = "string1";
	// char string6SL[] = "none-some+more!";
	// a = strlcpy(string5SL, string6SL, 0);

	// printf("%d String5SL: %s, String6SL: %s\n", a, string5SL, string6SL);
	// printf("String5SL 8th char: %c", string5SL[7]);
	// if (string5SL[12] == '\0')
	// 	printf("   \\0\n");
	// return (0);
//}


// #include "ft_atoi.c"

// int 	main()
// {
	// printf("%d\n", ft_atoi("asdf-2147483648"));
    // printf("%d\n", ft_atoi("-2147483648"));
    // printf("%d\n", ft_atoi("   -343"));
    // printf("%d\n", ft_atoi("56 57"));
    // printf("%d\n", ft_atoi("56b56"));
    // printf("%d\n", ft_atoi("a56b56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t 56b56"));
    // printf("%d\n", ft_atoi("5\v\r\f\n\t 56b56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t a56b56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t 56-56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t +56+56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t ----56+56"));
    // printf("%d\n", ft_atoi("\v\r\f\n\t +++++56+56"));
// 	return (0);
// }
//\v\r\f\n\t
//0
//-2147483648
//-343
//56
//56
//0
//56
//5
//0
//56
//56

// 0
// -2147483648
// -343
// 56
// 56
// 0
// 56
// 5
// 0
// 56
// 56

// #include "ft_strncat.c"

// int 	main()
// {
// 	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
// 	printf("%s\n", ft_strncat(test, "asdf", 16));
// 	printf("%s\n", ft_strncat(test, "", 16));
// 	printf("%s\n", ft_strncat(test, "qwerty", 0));
// 	printf("%s\n", ft_strncat(test, "asdf", 3));
// 	return (0);
// }

// #include "ft_strlcat.c"

// int 	main()
// {
// 	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
// 	printf("%u-", ft_strlcat(test, "asdf", 16));
// 	printf("%s\n", test);
// 	printf("%u-", ft_strlcat(test, "asdf", 6));
// 	printf("%s\n", test);
// 	printf("%u-", ft_strlcat(test, "asdf", 4));
// 	printf("%s\n", test);
// 	printf("%u-", ft_strlcat(test, "", 16));
// 	printf("%s\n", test);
// 	printf("%u-", ft_strlcat(test, "asdf", 0));
// 	printf("%s\n", test);
// 	return (0);
// }

// #include "ft_strlcpy.c"

// int 	main()
// {
// 	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
// 	printf("%d-", ft_strlcpy(test, "asdf", 16));
// 	printf("%s\n", test);
// 	printf("%d-", ft_strlcpy(test, "uiop", 0));
// 	printf("%s\n", test);
// 	printf("%d-", ft_strlcpy(test, "qwerty", 4));
// 	printf("%s\n", test);
// 	printf("%d-", ft_strlcpy(test, "", 4));
// 	return (0);
// }

// int 	main()
// {
// 	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
// 	printf("%lu-", strlcpy(test, "asdf", 16));
// 	printf("%s\n", test);
// 	printf("%lu-", strlcpy(test, "uiop", 0));
// 	printf("%s\n", test);
// 	printf("%lu-", strlcpy(test, "qwerty", 4));
// 	printf("%s\n", test);
// 	printf("%lu-", strlcpy(test, "", 4));
// 	return (0);
// }


// 4-asdf
// 4-asdf
// 6-qwe
// 0-

// 16-asdf
// 0-
// 4-qwe
// 4-