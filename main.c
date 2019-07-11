#include <stdio.h>

void	ft_putchar(char c);

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}


int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	long	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (ft_isspace(str[i]) != 0)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] % 48);
		i++;
	}
	nb *= neg;
	return ((int)nb);
}

int main(void)
{
	printf("%d\n", ft_atoi("+++œ153a00"));
}
