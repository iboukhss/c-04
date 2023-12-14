/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:55:17 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 20:07:27 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_count_minus_signs(char *str)
{
	int	count;

	count = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			++count;
		++str;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	number;
	int	sign;

	while (ft_is_space(*str))
		++str;
	sign = ft_count_minus_signs(str);
	while (*str == '+' || *str == '-')
		++str;
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0');
		++str;
	}
	return (sign * number);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*quaranteDeux = " ---+--+1234ab567";
	int		result;

	result = ft_atoi(quaranteDeux);
	printf("int is: %d\n", result);
}
*/
