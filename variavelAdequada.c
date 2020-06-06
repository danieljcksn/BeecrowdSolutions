//Programa que, dado o valor máximo de variável exigida no problema, imprime a variável adequada para armazenar aquele valor. (em C++)

#include <stdio.h>

int main(void){
    unsigned long long int numero;
    
    /*
    int: -2147483648 to 2.147.483.647
    unsigned int: 0 to 4.294.967.295
    long int: -2.147.483.648 to 2.147.483.647
    unsigned long int: 0 to 4.294.967.295
    long long int:  -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807 (Capaz de armazenar o resultado).
    unsigned long long int: 0 to 18.446.744.073.709.551.615
    */

    printf("A variável inteira terá um valor máximo de ");
    scanf("%llu", &numero);

    if(numero >= -32767 && numero <= 32767)
        printf("Variável adequada: int - 16 bits.\nRepresentação: %%d ou %%i\n");
    else if(numero <= 65535)
        printf("Variável adequada: unsigned int - 16 bits. \nRepresentação: %%u\n");
    else if(numero <= 2147483647)
        printf("Variável adequada: long int - 32 bits. \nRepresentação: %%li\n"); 
    else if(numero <= 4294967295)
        printf("Variável adequada: unsigned long int - 32 bits. \nRepresentação: %%lu\n"); 
    else if(numero <= 9223372036854775807)
        printf("Variável adequada: long long int - 64 bits. \nRepresentação: %%lli\n"); 
    else if(numero <= 9223372036854775807)
        printf("Variável adequada: long long int - 64 bits. \nRepresentação: %%lli\n"); 
    else if(numero <= 18446744073709551615)
        printf("Variável adequada: unsigned long long int - 64 bits. \nRepresentação: %%llu\n"); 

    return 0;
}