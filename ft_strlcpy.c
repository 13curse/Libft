#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while(src[len] != '\0') 
		len++;
	if(size == 0) // si la taille est 0 on renvoie directement la longueur sans copier
		return(len);
	while(src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i]; // on copie les caractères de src vers dst
		i++;
	}
	dst[i] = '\0'; // on ajoute la terminaison nulle
	return(len); // et on renvoie la longueur de la chaîne source
}

// Copie une chaîne de caractères d'une source vers une destination en choissant la longueur copiée.

/*void	ft_putchar(char c)
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
	if(n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	test(const char *src, size_t size)
{
	char	dest[20] = "********************"; // on initialise le buffer

	ft_putstr("src: ");
	ft_putstr(src);
	ft_putstr("\nsize: ");
	ft_putnbr(size);
	ft_putstr("\ndest: ");
	ft_strlcpy(dest, src, size);
	ft_putstr(dest);
	ft_putstr("\nretour ");
	ft_putnbr(ft_strlcpy(dest, src, size));
	ft_putstr("\n\n");
}

int	main()
{
	test("Hello, Bonjour, Hola", 20); // Copie classique
	test("Bonjourno World!", 7); // Troncature
	test("Hello", 6); // Taille exacte avec le '\0'
	test("Hello", 0); // Taille 0
	test("", 5); // Chaîne vide
	return(0);
}*/
