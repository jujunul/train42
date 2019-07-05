#include <stdio.h>

void	ft_putchar(char c);


void	ft_first_line(int x, char *tab)
{
	int i;
	
	i = 1;
	ft_putchar(tab[0]);
	while (i < x - 1)
	{
		ft_putchar(tab[4]);
		i++;
	}
	if (x >= 2)
		ft_putchar(tab[1]);
	ft_putchar('\n');
}

void	ft_middle(int x, int y, char *tab)
{
	int i;
	int j;
	
	i = 1;
	while (i < y - 1)
	{
		j = 1;
		ft_putchar(tab[5]);
		while (j < x - 1 )
		{
			ft_putchar(' ');
			j++;
		}
		if (x > 1)
			ft_putchar(tab[5]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_last_line(int x, char *tab)
{
	int i;
	
	i = 1;
	ft_putchar(tab[2]);
	while (i < x - 1)
	{
		ft_putchar(tab[4]);
		i++;
	}
	if (x >= 2)
		ft_putchar(tab[3]);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	tab[6];
	
	tab[0] = '/';
	tab[1] = '\\';
	tab[2] = '\\';
	tab[3] = '/';
	tab[4] = '*';
	tab[5] = '*';
	
	if (x > 0 && y > 0)
	{
		ft_first_line (x, tab);
		if (y > 2)
			ft_middle(x, y, tab);
		if (y >= 2)
			ft_last_line (x, tab);
	}
	else
		printf("don't troll me\n");
}

int main(void)
{
	rush(0, 10);
}
