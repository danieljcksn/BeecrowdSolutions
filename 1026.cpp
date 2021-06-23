#include <bits/stdc++.h>

using namespace std;

string toBinary(long long a){
    string aBin = "";

    if(a == 0){
        aBin = "0";
    }else
        while(a > 0){
            if(a%2 == 0)
                aBin += '0';
            else
                aBin += '1';
            a /= 2;
        }


    reverse(aBin.begin(), aBin.end());

    return aBin;
}
int main(){
    long long x, y;
    while(cin >> x >> y){
        string aBin = toBinary(x), bBin = toBinary(y);
        vector<char> num1, num2, result;

        num1.assign(32, '0');
        num2.assign(32, '0');
        result.assign(32, '0');
        int j = 31;
        for(int i = aBin.size()-1; i >= 0; --i){
            num1[j] = aBin[i];
            j--;
        }
        
        j = 31;
        for(int i = bBin.size()-1; i >= 0; --i){
            num2[j] = bBin[i];
            j--;
        }
        
        for(int i = 0; i < 32; ++i){
            if(num1[i] == '1' && num2[i] == '1')
                result[i] = '0';
            else if(num1[i] == '1' || num2[i] == '1')
                result[i] = '1';
        }

        long long dec = 0, pot = 0;
        for(int i = 31; i >= 0; --i, ++pot){
            if(result[i] == '1'){
                dec += (long long)(pow(2, pot));
            }
        }
        cout << dec << '\n';
    }

    return 0;
}
