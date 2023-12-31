/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboukhss <iboukhss@student.42luxe...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:14:25 by iboukhss          #+#    #+#             */
/*   Updated: 2023/12/14 15:14:38 by iboukhss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return(len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "";
	int		ret;
	ret = ft_strlen(str);
	printf("%d\n", ret);
}
*/
