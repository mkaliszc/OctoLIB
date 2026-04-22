# include "libft.h"

/*	original prototype : long strtol( const char * theString, char ** end, int base )
	
	For this implementation I decided to not include the end parameter knowing that 
	I won't use it like this
*/


long	ft_strtol(char *str, int base) {
	long	nbr = 0;
	long	value = 0;
	int		i = 0;
	int		sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isalnum(str[i]))
	{
		if (str[i] <= '9' && str[i] >= '0') {
			value = str[i] - '0';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			value = str[i] - 'A' + 10;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			value = str[i] - 'a' + 10;
		}
		if (value >= base) {
			break ;
		}
		nbr = nbr * base + value;
		i++;
	}
	return (nbr * sign);
}