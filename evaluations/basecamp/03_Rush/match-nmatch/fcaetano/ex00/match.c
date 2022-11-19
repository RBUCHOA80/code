int        match(char *s1, char *s2);
int        ft_strstrn(char *str, char *to_find, int end_i);
int        ft_strlen(char *str);

int    ft_strlen(char *str)
{
    int    n;

    n = 0;
    while (*str)
    {
        n++;
        str++;
    }
    return (n);
}

int        ft_strstrn(char *str, char *to_find, int end_i)
{
    int    is;
    int    jt;

    if (end_i == 0)
        return (-1);
    is = 0;
    while (str[is] != '\0')
    {
        jt = 0;
        while (str[is + jt] == to_find[jt])
        {
            jt++;
            if (jt == end_i)
                return (is+jt);
        }
        is++;
    }
    return (0);
}

int    match(char *s1, char *s2)
{
    int    start_sub;
    int    end_sub;
    int    index_s2;
    int    index_s1;
    int    strstrn;

    index_s2 = 0;
    index_s1 = 0;
    while (s1[index_s1])
    {
        while (s2[index_s2] == '*')
            index_s2++;
        start_sub = index_s2;
        while (s2[index_s2] != '*' && s2[index_s2] != 0)
            index_s2++;
        end_sub = index_s2;
        strstrn = ft_strstrn(&s1[index_s1], &s2[start_sub], end_sub - start_sub);
        if ((!strstrn) || (start_sub == 0 && strstrn != end_sub))
            return (0);
        if ((strstrn = -1) && (s2[ft_strlen(s2)-1] != '*'))
            return (0);
        else
            return (1);    
        index_s1 += strstrn;
    }
    return (1);
}

#include <stdio.h>
int    main(void)
{
    char    s1[] = "Put your sample text here";
    char    s2[] = "Put*here";

    printf("\n%d", match(s1, s2));
    return (0);
}
