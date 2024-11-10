#include <stddef.h>
#include <unistd.h>

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

// Compte le nombre de caractères d'une chaîne de caractère

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

void	test_strlen(const char *str)
{
	ft_putstr("ft_strlen(\"");
	ft_putstr(str);
	ft_putstr("\" = ");
	ft_putnbr(ft_strlen(str));
	ft_putchar('\n');
}

int	main()
{
	ft_putstr("Test de ft_strlen:\n");

	test_strlen("Hello, World!");
	test_strlen("");
	test_strlen("A");
	test_strlen("This is a longer string to test.");
	test_strlen("12345");
	test_strlen("Special chars: !@#$%^&*()");
	test_strlen("Tabs and spaces:	\t	");

	return(0);
}*/
