#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest; // je mets des unsigned char pour pouvoir modifier octet par octet
	const unsigned char	*s = src; // s est constant car je ne modifie pas la source
	size_t i;

	i = 0;
	while (i < n) // tant que je suis sous la limite donnée par size_t n
	{
		d[i] = s[i]; // passage de chaque octet de source vers destination
		i++;
	}
	return (dest);
}

/*void	ft_putchar(char c)
{
	    write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	    while (*str)
		            ft_putchar(*str++);
}

void	ft_putnbr(int n)
{
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	if(str == (void *)0)
		return(0);
	while(str[len] != '\0')
		len++;
	return(len);
}

void	print_memory(const void *addr, size_t size)
{
	const unsigned char	*p = addr;
	size_t	i = 0;

	while(i < size)
	{
		if(p[i] < 16)
			ft_putchar('0');
		ft_putnbr(p[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int	main()
{
	char	src1[] = "Hello, World!";
	char	dest1[20];

	ft_putstr("Test 1 : Copie d'une chaîne\n");
	ft_putstr("Source: ");
	ft_putstr(src1);
	ft_putchar('\n');
	ft_memcpy(dest1, src1, ft_strlen(src1) + 1);
	ft_putstr("Destination: ");
	ft_putstr(dest1);
	ft_putchar('\n');

	char	src2[] = "Soleil";
	char	dest2[10] = "XXXXXXXX";

	ft_putstr("\nTest 2: Copie partielle\n");
	ft_putstr("Avant: ");
	ft_putstr(dest2);
	ft_putchar('\n');
	ft_memcpy(dest2, src2, 4);
	ft_putstr("Après: ");
	ft_putstr(dest2);
	ft_putchar('\n');

	int	src3[] = {1, 2, 3, 4, 5};
	int	dest3[5];

	ft_putstr("\nTest 3: Copie d'entiers\n");
	ft_putstr("Source: ");
	print_memory(src3, sizeof(src3));
	ft_memcpy(dest3, src3, sizeof(src3));
	ft_putstr("Destination: ");
	print_memory(dest3, sizeof(dest3));

	char	src4[10] = {0};
	char	dest4[10] = "ABCDEFGHI";

	ft_putstr("\nTest 4 : Copie d'octets nuls\n");
	ft_putstr("Avant: ");
	print_memory(dest4, sizeof(dest4));
	ft_memcpy(dest4, src4, sizeof(src4));
	ft_putstr("Après: ");
	print_memory(dest4, sizeof(dest4));

	return(0);
}*/
