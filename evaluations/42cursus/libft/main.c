#include "libft.h"
#include <stdio.h>
#include <string.h>

void    del_content(void *pointer)
{
    printf("deleted %p\n", pointer);
}
 
char get_upper(unsigned int i, char c)
{
    i = 0;
    if (ft_isalpha(c))
    {
        return (ft_toupper(c));
    }
    return (c);
}
 
char get_lower(unsigned int i, char c)
{
    i = 0;
    if (ft_isalpha(c))
    {
        return (ft_tolower(c));
    }
    return (c);
}
 
char *get_upper_str(unsigned int i, char *c)
{
    *c = get_upper(i, *c);
    return (c);
}
 
char *get_lower_str(unsigned int i, char *c)
{
    *c = get_lower(i, *c);
    return (c);
}
 
void make_upper(void *sqnc)
{
    char *str;
 
    str = (char *) sqnc;
    while(*str != '\0')
    {
        *str = get_upper(0, *str);
        str++;
    }
}
 
void *make_upper_2(void *sqnc)
{
    char *str;
 
    str = (char *) sqnc;
    make_upper(str);
    return (str);
}    
 
int 	main(void)
{
	printf("\n === ft_lstnew === \n");
    t_list *lst[5];
    char *strs[5];
    strs[0] = "Hey";
    strs[1] = "This";
    strs[2] = "Is";
    strs[3] = "A";
    strs[4] = "List";
    for (int i = 0; i < 5; i++)
    {
        lst[i] = ft_lstnew(strs[i]);
        if (i > 0)
            lst[i - 1]->next = lst[i];
    }
    t_list *node = lst[0];
    for (int i = 0; i < 5; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
 
    printf("\n === ft_lstadd_front === \n");
    t_list *new_node = ft_lstnew("42!");
    printf("new node | addr: %p | content: %s | next: %p\n", new_node, new_node->content, new_node->next);
    printf("Adding new node to the front of the list\n");
    ft_lstadd_front(lst, new_node);
    node = lst[0];
    for (int i = 0; i < 6; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
 
    printf("\n === ft_lstsize === \n");
    t_list *f1_drivers = ft_lstnew("Ayrton Senna");
    f1_drivers->next = ft_lstnew("Max Verstappen");
    f1_drivers->next->next = ft_lstnew("Charles Leclerc");
    f1_drivers->next->next->next = ft_lstnew("Lewis Hamilton");
    node = f1_drivers;
    for (int i = 0; i < 4; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
    printf("The list size is: %d\n", ft_lstsize(f1_drivers));
 
    printf("\n === ft_lstlast === \n");
    t_list *cs_players = ft_lstnew("Fallen");
    cs_players->next = ft_lstnew("Gaules");
    cs_players->next->next = ft_lstnew("Fnx");
    node = cs_players;
    for (int i = 0; i < 3; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
    printf("The list size is: %d\n", ft_lstsize(cs_players));
    t_list *last_node = ft_lstlast(cs_players);
    printf("LAST ITEM | addr: %p | content: %s | next: %p\n", last_node, last_node->content, last_node->next);
 
    printf("\n === ft_lstadd_back === \n");
    node = cs_players;
    printf("\n --- before adding more elements\n");
    for (int i = 0; i < 3; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
    ft_lstadd_back(&cs_players, ft_lstnew("s1mple"));
    ft_lstadd_back(&cs_players, ft_lstnew("coldZer0"));
    int cs_len = ft_lstsize(cs_players);
    node = cs_players;
    printf("\n --- after adding more elements\n");
    for (int i = 0; i < cs_len; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
 
    printf("\n === ft_lstclear === \n");
    node = cs_players;
    printf("\n --- before clearing the list\n");
    for (int i = 0; i < cs_len; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, node, node->content, node->next);
        node = node->next;
    }
    ft_lstclear(&cs_players, del_content);
    node = cs_players;
    printf("%p\n", &cs_players);
 
    printf("\n === ft_lstiter === \n");
    printf("\n --- Before ft_lstiter\n");
    t_list *metal_bands = ft_lstnew(ft_strdup("Metallica"));
    metal_bands->next = ft_lstnew(ft_strdup("Megadeath"));
    metal_bands->next->next = ft_lstnew(ft_strdup("Judas Priest"));
    metal_bands->next->next->next = ft_lstnew(ft_strdup("Pantera"));
 
    t_list *band = metal_bands;
    int bands_size = ft_lstsize(metal_bands);
    for (int i = 0; i < bands_size; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, band, band->content, band->next);
        band = band->next;
    }
    ft_lstiter(metal_bands, make_upper);
    printf("\n --- After ft_lstiter\n");
    band = metal_bands;
    bands_size = ft_lstsize(metal_bands);
    for (int i = 0; i < bands_size; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, band, band->content, band->next);
        band = band->next;
    }
 
    printf("\n === ft_lstmap === \n");
    printf("\n --- Before ft_lstmap \n");
    t_list *thinkers = ft_lstnew(strdup("Aristoteles"));
    thinkers->next = ft_lstnew(strdup("Socrates"));
    thinkers->next->next = ft_lstnew(ft_strdup("Plato"));
    thinkers->next->next->next = ft_lstnew(ft_strdup("Seneca"));
 
    t_list *thinker = thinkers;
    for (int i = 0; i < bands_size; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, thinker, thinker->content, thinker->next);
        thinker = thinker->next;
    }
 
    printf("\n --- After ft_lstmap \n");
    thinker = ft_lstmap(thinkers, make_upper_2, del_content);
    for (int i = 0; i < bands_size; i++)
    {
        printf("node [%d] | addr: %p | content: %s | next: %p\n", i, thinker, thinker->content, thinker->next);
        thinker = thinker->next;
    }
	return (0);
}
