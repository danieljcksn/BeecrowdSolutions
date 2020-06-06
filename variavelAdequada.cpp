//Programa que, dado o valor máximo de variável exigida no problema, imprime a variável adequada para armazenar aquele valor. (em C++)

#include <iostream>

using namespace std;

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

    cout << "A variável inteira terá um valor máximo de ";
    cin >> numero;

    if(numero >= -2147483648 && numero <= 214748364)
        cout << "Variável adequada: int - 4 bytes. \nRepresentação: %d ou %i\n";
    else if(numero <= 4294967295)
        cout << "Variável adequada: unsigned int - 4 bytes. \nRepresentação: %u\n";
    else if((numero >= -9223372036854775808 && numero <= 0) || numero <= 9223372036854775807)
        cout << "Variável adequada: long long int - 8 bytes. \nRepresentação: %lli\n"; 
    else if(numero <= 18446744073709551615)
        cout << "Variável adequada: unsigned long long int - 8 bytes. \nRepresentação: %llu\n"; 

    return 0;
}