#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

    int main(int argc, char *argv[])
    {
        int var_input, horas, minutos, segundos;
        
        printf("%s", "Digite o tempo em segundos: ");
        scanf("%d",&var_input);
        horas = (double) var_input / 3600;
        minutos = (double) (var_input - horas * 3600) / 60;
        segundos = (var_input - horas * 3600) % 60;
        printf("%s", atoi(horas) + ":");
        return (0);
    }
    
