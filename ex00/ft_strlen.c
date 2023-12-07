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
