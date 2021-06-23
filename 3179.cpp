#include <bits/stdc++.h>
 
using namespace std;

unsigned long long int power(unsigned long long int a){
    unsigned long long int result = 1;
    
    while(a > 0){
        result *= 2;
        a--;
    }
    
    return result;
}
 
int main() {
    unsigned long long int n, b;
    
    cin >> n >> b;
    
    /*
    Sendo n arquivos distintos, o programa
    de compressão deve ser capaz de gerar, pelo menos
    n arquivos distintos. A pergunta, portanto, é: 
    Quantos arquivos únicos de tamanho máximo b bits 
    podem ser obtidos?
    
    
    Os arquivos comprimidos terão
    tamanho máximo de 0,...,b bits.
    Sendo arquivos binários, para b bits, teremos
    2^b arquivos distintos, 
    2^(b-1) arquivos distintos para b-1 bits,
    ...
    
    Se o somatório de 2^0, 2^1, ... 2^b for 
    maior ou igual a n, saberemos que
    será possível gerar uma quantidade de arquivos distintos
    maior ou igual à quantidade dos arquivos de entrada.
    
    Caso contrário, não será possível gerar, pelo menos
    n arquivos distintos com arquivos comprimidos contendo, 
    no máximo, b bits.
    */
    
    if((power(b+1) - 1) >= n)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}
