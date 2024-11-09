#include <unistd.h>


int	ft_isalpha(int i)
{
	if((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return(1);
	else
		return(0);
}

// Vérifie si un caractère passé en entrée est alphabétique

/*void ft_putchar(char c)
{
	    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	    while (*str)
		            ft_putchar(*str++);
}

int main()
{
	    char test_chars[] = {'A', 'z', '5', '!', 'M', 'p', '0', ' '};
	        int i;

		    ft_putstr("Test de ft_isalpha:\n");

		        i = 0;
			    while (i < 8)
				        {
						        ft_putchar(test_chars[i]);
							        ft_putstr(": ");
								        if (ft_isalpha(test_chars[i]))
										            ft_putstr("C'est une lettre\n");
									        else
											            ft_putstr("Ce n'est pas une lettre\n");
										        i++;
											    }

			        return (0);
}*/
