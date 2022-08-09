#include <stdio.h>

int main()
{
    char ptr[2];
    short ptr1[2];
    int ptr2[2];
    long long ptr3[2];

    char *p_char = ptr;
    short *p_short = ptr1;
    int *p_int = ptr2;
    long long *p_ll = ptr3;
    void *p_void = "palavra teste";

    printf("A posição inicial do char é %d\n", p_char);
    printf("A posição inicial do short é %d\n", p_short);
    printf("A posição inicial do int é %d\n", p_int);
    printf("A posição inicial do long long é %d\n", p_ll);
    printf("A posição inicial do void é %d\n\n", p_void);

    p_char++;
    p_short++;
    p_int++;
    p_ll++;
    p_void++;

    printf("A posição final do char é %d\n", p_char);
    printf("A posição final do short é %d\n", p_short);
    printf("A posição final do int é %d\n", p_int);
    printf("A posição final do long long é %d\n", p_ll);
    printf("A posição final do void é %d\n\n", p_void);
    return 0;
}