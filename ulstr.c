#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i++] - 32);
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i++] + 32);
			ft_putchar (argv[1][i]);
			i++;
		}
	}
	return (0);
}
