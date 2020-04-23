////Questão 3047 - A Idade de Dona Mônica - URI Online Judge
#include <iotream>
#include <algorithms>

using namespace std;

int main(){
    int m, filhos[3];
    cin >> m;
    cin >> filhos[0];
    cin >> filhos[1];

    filhos[2] = m - (filhos[0] + filhos[1]);
    sort(filhos, filhos + 3);

    cout << filhos[2] << endl;
    return 0;
}
