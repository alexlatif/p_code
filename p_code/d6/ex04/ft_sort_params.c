/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 19:38:27 by alatif            #+#    #+#             */
/*   Updated: 2018/10/30 19:40:43 by alatif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	lcl_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	lcl_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		lcl_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

char	**lcl_sort(char **arr)
{
	int i;
	int sorted;
	int last_ele;

	sorted = 0;
	last_ele = 1;
	while (arr[last_ele])
		last_ele++;
	while (!sorted)
	{
		sorted = 1;
		i = 2;
		while (i < last_ele)
		{
			if (lcl_strcmp(arr[i], arr[i - 1]) < 0)
			{
				lcl_swap(&arr[i], &arr[i - 1]);
				sorted = 0;
			}
			i++;
		}
		last_ele--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**sorted;

	i = 1;
	if (argv[1])
		sorted = lcl_sort(argv);
	while (i < argc)
	{
		lcl_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
