#include <stdio.h>

int main(){
    int a1, b1, a2, b2;


    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    int sizeGunnar1 = b1-a1  + 1;
    int gunnar1[sizeGunnar1];
    for(int i = 0; i < sizeGunnar1; ++i){
        gunnar1[i] = a1+i;
    }

    int sizeGunnar2 = b2-a2  + 1;
    int gunnar2[sizeGunnar2];

    for(int i = 0; i < sizeGunnar2; ++i){
        gunnar2[i] = a2+i;
    }


    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    int sizeEmma1 = b1 - a1 + 1;
    int emma1[sizeEmma1];

    for(int i = 0; i < sizeEmma1; ++i){
        emma1[i] = a1+i;
    }

    int sizeEmma2 = b2 - a2 + 1;

    int emma2[sizeEmma2];

    for(int i = 0; i < sizeEmma2; ++i){
        emma2[i] = a2+i;
    }

    int size1 = (sizeGunnar1) * (sizeGunnar2);
    int size2 = (sizeEmma1) * (sizeEmma2);

    int gunnarComb[size1], emmaComb[size2];

    int idxComb = 0;
    for(int i = 0; i < sizeGunnar1; ++i){
        for(int j = 0; j < sizeGunnar2; ++j){
            gunnarComb[idxComb] = gunnar1[i] + gunnar2[j];
            idxComb++;
        }
    }

    idxComb = 0;
    for(int i = 0; i < sizeEmma1; ++i){
        for(int j = 0; j < sizeEmma2; ++j){
            emmaComb[idxComb] = emma1[i] + emma2[j];
            idxComb++;
        }
    }

    int probGunnar = 0, probEmma = 0;

    for(int i = 0; i < size1; ++i){
        for(int j = 0; j < size2; ++j){
            if(gunnarComb[i] > emmaComb[j])
                probGunnar++;
            else if(gunnarComb[i] < emmaComb[j])
                probEmma++;
        }
    }


    if(probGunnar > probEmma)
        printf("Gunnar\n");
    else if(probEmma > probGunnar)
        printf("Emma\n");
    else
        printf("Tie\n");

    return 0;
}
