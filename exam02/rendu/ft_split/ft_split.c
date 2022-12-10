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
	while (str[i])
	{
		while (str[i] && str[i] < 33)
			i++;
		if (str[i] && (33 <= str[i] && str[i] <= 126))
			count++;
		while (str[i] && 32 < str[i])
			i++;
	}
	if (!str)
	{
		ret = (char**)malloc(sizeof(*ret));
		ret = NULL;
		return (ret);
	}
	ret = (char**)malloc((count + 1) * sizeof(*ret));
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
		ret[j] = (char*)malloc(dest + 1);
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
	int i;

	i = 0;
	while (ft_split("Sample   lksajf klasjfa text 654    here")[i])
		printf("|%s| ", ft_split("Sample   lksajf klasjfa text 654    here")[i++]);
	printf("\n");
	i = 0;
	while (ft_split("   Sample   lksajf klasjfa text 654    here")[i])
		printf("|%s| ", ft_split("   Sample   lksajf klasjfa text 654    here")[i++]);
	printf("\n");
	i = 0;
	while (ft_split("   Sample   lksajf klasjfa text 654    here   ")[i])
		printf("|%s| ", ft_split("   Sample   lksajf klasjfa text 654    here   ")[i++]);
	printf("\n");
	return (0);
}


