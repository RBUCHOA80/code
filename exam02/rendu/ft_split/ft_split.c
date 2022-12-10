#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **ret;
	int count = 0;
	int len;
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] < 33)
		i++;
	while (str[i])
	{
		if (str[i] && ( str[i] <= 33 || 126 <= str[i]))
			count++;
		while (str[i] && str[i] < 33)
			i++;
		i++;
	}
	if (!str)
	{
		ret = (char**)malloc(sizeof(*ret));
		ret = NULL;
		return (ret);
	}
	ret = (char**)malloc(count * sizeof(*ret));
	if (!ret)
		return (NULL);
	int dest = 0;
	i = 0;
	j = 0;
	while(j < count)
	{
		while (str[i] <= 32)
			i++;
		len = i;
		dest = 0;
		while (str[len] > 32)
		{
			dest++;
			len++;
		}
		ret[j] = (char*)malloc(dest);
		k = 0;
		while(str[i] > 32)
		{
			ret[j][k] = str[i];
			i++;
			k++;
		}
		ret[j][k] = 0;
		j++;
	ret[j] = NULL;
	}
	ret[j] = NULL;
	return (ret);
}

int	main(void)
{
	char	**ret;
	char	*str;
	int i;

	str = " Sample lksajf klasjfa text 654    here  ";

	ret = ft_split(str);
	i = 0;
	while (ret[i])
		printf("%s\n", ret[i++]);
	return (0);
}


