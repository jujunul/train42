void	ft_putchar(char c)
{
	write(1, c, 1);
}

void ft_putstr(char *c)
{
	while (*c != '\0')
		write(1, c++, 1);
}

int main (int ac, char **av)
{
	int i;
	
	i = 0;
	
	if (ac !=2)
	{
		write(1, '\n', 1);
		return (0);
	}
	while (av[1][i] != '\0')
		{
		if (av[1][i] <= 90 && av[1][i] >= 65)
			av[1][i] = av[1][i] + 32;
		else if (av[1][i] <= 122 && av[1][i] >= 97)
			av[1][i] = av[1][i] - 32;
		i++;
	}
	ft_putstr(av[1]);
	ft_putchar('\n');
}
