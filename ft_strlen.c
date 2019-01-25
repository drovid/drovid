int		ft_strlen(char *str)
{
	int nbr;

	nbr = 0;
	while (str[nbr])
		nbr++;
	return (nbr);
}
