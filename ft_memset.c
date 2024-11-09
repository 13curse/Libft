#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n) // s = pointeur vers la zone mémoire à remplir, c = valeur à copier qu'on convertie en unsigned char, n = nombre doctets a remplir
{
	unsigned char	*p = s; // pointeur p initialisé avec s pour manipuler la mémoire octet par octet
	unsigned char	value = (unsigned char)c; // conversion de c 

	while(n > 0) // remplissage de la mémoire
	{
		*p = value; // remplissage de chaque octet un par un
		p++; // passe a l'octet suivant
		n--; // compte le nombre d'octets restants à remplir
	}

	return s; // on renvoie le pointeur original s 
}

/*void ft_putstr(const char *str)
{
	    while (*str)
		            write(1, str++, 1);
}

int	main()
{
	int	i;
	int	len;
	char	str[50]; // Tableau str de 50 caractères

	ft_memset(str, 'e', 49); // Remplis les 49 premiers caractères avec des e
	str[49] = '\0'; // Place le caractère nul a la fin de la chaîne

	ft_putstr("Résultat de ft_memset : ");
	ft_putstr(str);
	ft_putstr("\n"); // Affiche le contenu de str après avoir utilisé ft_memset

	ft_putstr("Longueur de la chaîne : ");
	len = 0;
	while(str[len])
		len++;
	char len_str[20];
	i = 0;
	if(len == 0)
		len_str[i++] = '0';
	else
	{
		while(len > 0)
		{
			len_str[i++] = (len % 10) + '0';
			len /= 10;
		}
	}
	len_str[i] = '\0';
	while(i > 0)
		write(1, &len_str[--i], 1);
	ft_putstr("\n");

	return(0); // Calcule et affiche la longueur de la chaîne
}*/
