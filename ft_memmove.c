#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest;
	const unsigned char	*s = src;
	// On utilise deux cas pour éviter les pb de chevauchement de mémoire
	if(d < s) // 1er cas : dest est situé avant src dans la mémoire
	{
		while(n--) // on utilise une boucle qui décrémente n et on copie de gauche à droite
			*d++ = *s++;
	}
	else // 2eme cas : src est situé avant dest dans la mémoire
	{
		d += n; // on déplace les pointeurs à la fin de la zone mémoire
		s += n;
		while (n--)
			*--d = *--s; // mettre *--ptr permets de décrémenter avant d'acceder au contenu du pointeur
	}
	return dest;
}

// Même principe que ft_memcpy sauf qu'on gère le cas où src et dest peuvent se chevaucher.

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
	size_t i = 0;

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

	ft_putstr("Test 1: Copie sans chevauchement\n");
	ft_putstr("Source: ");
	ft_putstr(src1);
	ft_putchar('\n');
	ft_memmove(dest1, src1, ft_strlen(src1) + 1);
	ft_putstr("Destination: ");
	ft_putstr(dest1);
	ft_putchar('\n');


	char	str2[] = "abcdefghijklmnopqrstuvwxyz";

	ft_putstr("\nTest 2: Copie avec chevauchement (dest avant src)\n");
	ft_putstr("Avant: ");
	ft_putstr(str2);
	ft_putchar('\n');
	ft_memmove(str2, str2 + 5, 10);
	ft_putstr("Après: ");
	ft_putstr(str2);
	ft_putchar('\n');

	char	str3[] = "abcdefghijklmnopqrstuvwxyz";

	ft_putstr("\nTest 3 : Copie avec chevauchement (src avant dest)\n");
	ft_putstr("Avant: ");
	ft_putstr(str3);
	ft_putchar('\n');
	ft_memmove(str3 + 5, str3, 10);
	ft_putstr("Après: ");
	ft_putstr(str3);
	ft_putchar('\n');

	int	src4[] = {1, 2, 3, 4, 5};
	int	dest4[5];

	ft_putstr("\nTest 4: Copie d'un tableau d'entiers\n");
	ft_putstr("Source: ");
	print_memory(src4, sizeof(src4));
	ft_memmove(dest4, src4, sizeof(src4));
	ft_putstr("Destination: ");
	print_memory(dest4, sizeof(dest4));
	
	return(0);
}*/
