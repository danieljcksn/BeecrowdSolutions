//Questão 1095 - Sequência IJ1 - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int i = 1, j = 60;


    while(j >= 0){
        cout << "I=" << i << " " << "J=" << j << endl;
        i += 3;
        j -= 5;
    }



    return 0;
}