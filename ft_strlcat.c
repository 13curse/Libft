#include <stddef.h>
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	while(dst[i] && i < size) // On trouve la longueur de dst dans la limite de size
		i++;
	dst_len = i;
	src_len = 0;
	while(src[src_len]) // On calcule la longueur de src
		src_len++;
	if(dst_len == size) // Si la longueur de dst est égal a la taille c'est que dst est plein.
		return(size + src_len);
	i = 0;
	while(src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i]; // On copie les caractères de src à la fin de dst.
		i++;
	}
	dst[dst_len + i] = '\0'; // On ajoute le caractère nul
	return(dst_len + src_len); // On renvoie la longueur totale de la chaîne 
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	while(*str)
		ft_putchar(*str++);
}

void	ft_putnbr(size_t n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
