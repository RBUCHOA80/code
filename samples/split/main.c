#include "libft.h"

int	main(void)
{
	char	**ret;
	char	*sample;
	int		i;

	sample = "     Put  \t    your  \
	  sample  \n  text     here.     ";
	ret = ft_split(sample);
	i = 0;
	while(ret[i])
	{
		printf("%p ret[%i]='%s'\n", ret[i], i, ret[i]);
		i++;
	}
	return (0);
}
