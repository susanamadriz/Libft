#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	// printf("DINIT: %c\n", d[0]);
	// printf("SINIT: %c\n", s[0]);
	while (i < n)
	{
		d[i] = s[i];
		// printf("D: %c\n", d[i]);
		// printf("S: %c\n", s[i]);
		i++;
	}
	// printf("DEXTRA: %c\n", d[i]);
	// printf("DFINAL: %s\n", d);
	// printf("DEST: %s\n", dst);
	return (dst);
}

int main(void)
{
	char origen2[] = "hola pepe";
	char destino[] = "1234567890";
	char destino2[] = "que tal";
	// char origen2[] = "1234567890";

printf("DEST: %p\n", destino2);
printf("ORigen: %p\n", origen2);
	memcpy(destino2 , origen2, 8);
	printf("%p %p %p\n", origen2, destino2, destino);
	printf("Dif: %d\n", origen2 - destino2);
	printf(" memcpy: %s\n", destino2);
	// ft_memcpy(destino2, origen2, 8);
	// printf("ft_memcpy: %s\n", destino2);
	// memmove(destino2, origen2, 8);
	// printf("memmove: %s\n", destino2);
	return (0);
}