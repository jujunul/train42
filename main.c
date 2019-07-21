#include <stdio.h>

void	ft_putchar(char c);

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

void		ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = '\0';
}

void		*ft_realloc(void *old, int oldsize, int newsize)
{
	void *nex;

	nex = (void *)malloc(newsize);
	if (nex == NULL)
	{
		return (NULL);
	}
	if (old != NULL)
	{
		ft_bzero(nex, newsize);
		ft_memcpy(nex, old, (size_t)oldsize);
		free(old);
	}
	return (nex);
}

int main(void)
{
	printf("%d\n", ft_atoi("+++œ153a00"));
	printf("%d\n", atoi("kdknf"));
}
