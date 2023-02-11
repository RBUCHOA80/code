#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) //47
{
	int temp = nbr; //47
	int len = 0;

	if (nbr <= 0)
	{
	len++;
	}
	while (temp != 0) //47
	{   //0  =  4 / 10
		temp = temp / 10;
		len++; //2
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL) 
	{
		return NULL;
	}
	result[len] = '\0';
	if (nbr == 0) //47
	{
		result[0] = '0';
		return(result);
	}
	if (nbr < 0) //47
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0) //4
	{           //0       4 %  10
		result[--len] = 48 + (nbr % 10);
		//0 = 4 / 10
		nbr = nbr / 10;
	}
	return result;
}
