//Problema 1846 - Número Para Nome | URI Online Judge
#include <bits/stdc++.h>

using namespace std;

string umDig(char num){   
    string ans;
    switch(num){
        case '0':
            ans = "zero";
            break;
        case '1':
            ans = "um";
            break;
        case '2':
            ans = "dois";
            break;
        case '3':
            ans = "tres";
            break;
        case '4':
            ans = "quatro";
            break;
        case '5':
            ans = "cinco";
            break;
        case '6':
            ans = "seis";
            break;
        case '7':
            ans = "sete";
            break;
        case '8':
            ans = "oito";
            break;
        case '9':
            ans = "nove";
            break;
    }

    return ans;
}

string doisDig(string num){   
    string ans = "";
    switch(num[0]){
        //De 10 - 19
        case '1':
            switch(num[1]){
                case '0':
                    ans = "dez";
                    break;
                case '1':
                    ans = "onze";
                    break;
                case '2':
                    ans = "doze";
                    break;
                case '3':
                    ans = "treze";
                    break;
                case '4':
                    ans = "quatorze";
                    break;
                case '5':
                    ans = "quinze";
                    break;
                case '6':
                    ans = "dezesseis";
                    break;
                case '7':
                    ans = "dezessete";
                    break;
                case '8':
                    ans = "dezoito";
                    break;
                case '9':
                    ans = "dezenove";
                    break;
            }
            return ans;
        
        //20 - 29
        case '2':
            ans = "vinte";
            break;
        //30 - 39
        case '3':
            ans = "trinta";
            break;
        //40 - 49
        case '4':
            ans = "quarenta";
            break;
        //50 - 59
        case '5':
            ans = "cinquenta";
            break;
        //60 - 69
        case '6':
            ans = "sessenta";
            break;
        //70 - 79
        case '7':
            ans = "setenta";
            break;
        //80 - 89
        case '8':
            ans = "oitenta";
            break;
        //90 - 99
        case '9':
            ans = "noventa";
            break;
    }

    if(num[1] != '0'){
        ans += " e ";
        ans += umDig(num[1]);
    }

    return ans;
}

string tresDig(string num){  
    string ans = "";
    string substring = "";
    //Substring vai conter o número formado pelos dois últimos dígitos
    substring += num[1];
    substring += num[2];
    switch(num[0]){
        //De 100 - 199
        case '1':
            ans = "cem";
            if(num[1] != '0' || num[2] != '0'){
                ans = "cento e ";
                if(num[1] == '0')
                    ans += umDig(num[2]);
                else{
                    ans += doisDig(substring);
                }
            }
            return ans;
            
        //200 - 299
        case '2':
            ans = "duzentos";
            break;
        //300 - 399
        case '3':
            ans = "trezentos";
            break;
        //400 - 499
        case '4':
            ans = "quatrocentos";
            break;
        //500 - 599
        case '5':
            ans = "quinhentos";
            break;
        //600 - 699
        case '6':
            ans = "seiscentos";
            break;
        //700 - 799
        case '7':
            ans = "setecentos";
            break;
        //800 - 899
        case '8':
            ans = "oitocentos";
            break;
        //900 - 999
        case '9':
            ans = "novecentos";
            break;
    }

    //Os dois últimos dígitos
    if(num[1] != '0' || num[2] != '0'){
        ans += " e ";
        if(num[1] == '0')
            ans += umDig(num[2]);
        else
            ans += doisDig(substring);
    }

    return ans;
}

string quatroDig(string num){   
    string ans = "";
    string subCentena = ""; 
    string subDezena = "";
    //Substring vai conter o número formado pelos três últimos dígitos
    subCentena += num[1];
    subCentena += num[2];
    subCentena += num[3];
    subDezena += num[2];
    subDezena += num[3];
    switch(num[0]){
        //De 1000 - 1999
        case '1':
            ans = "";
            break;
            
        //2000 - 2999
        case '2':
            ans = "dois ";
            break;
        //3000 - 3999
        case '3':
            ans = "tres ";
            break;
        //4000 - 4999
        case '4':
            ans = "quatro ";
            break;
        //5000 - 5999
        case '5':
            ans = "cinco ";
            break;
        //6000 - 6999
        case '6':
            ans = "seis ";
            break;
        //7000 - 7999
        case '7':
            ans = "sete ";
            break;
        //8000 - 8999
        case '8':
            ans = "oito ";
            break;
        //9000 - 9999
        case '9':
            ans = "nove ";
            break;
    }

    ans += "mil";

    if(num[1] != '0' || num[2] != '0' || num[3] != '0'){
        if(num[1] != '0'){
            //1100, 1200, 1300, ...
            if(num[2] == '0' && num[3] == '0'){
                ans += " e ";
                ans += tresDig(subCentena);
            }else{
                //1141, 1254
                ans += " ";
                ans += tresDig(subCentena);
            }
        }else{
            //1020 ... 1001
            ans += " e ";
            if(num[2] != '0')
                ans += doisDig(subDezena);
            else
                ans += umDig(num[3]); 
        }
    }

    return ans;
}

string cincoDig(string num){ 
    string ans = "";
    string first2dig = "";
    string last2dig = "";    
    string last3dig = "";
    first2dig += num[0];
    first2dig += num[1];
    last3dig += num[2];
    last3dig += num[3];
    last3dig += num[4];
    last2dig += num[3];
    last2dig += num[4];
    ans = doisDig(first2dig);
    
    //10000 20000 50000...
    if(num[2] == '0' && num[3] == '0' && num[4] == '0')
        ans += " mil";
    else{
        if(num[2] != '0'){
            //10141
            if(num[3] != '0' || num[4] != '0'){
                ans += " mil ";
                ans += tresDig(last3dig);
            }else{
                //12100, 15200
                ans += " mil e ";
                ans += tresDig(last3dig);
            }
        }else{
            ans += " mil e ";
            if(num[3] == '0')
                ans += umDig(num[4]);
            else
                ans += doisDig(last2dig);
        }
    }
    return ans;  
}

string seisDig(string num){
    string ans = "";
    string first3dig = "";
    string last2dig = "";    
    string last3dig = "";
    first3dig += num[0];
    first3dig += num[1];
    first3dig += num[2];
    last3dig += num[3];
    last3dig += num[4];
    last3dig += num[5];
    last2dig += num[4];
    last2dig += num[5];

    ans = tresDig(first3dig);
    ans += " mil";
  
    if(num[3] != '0'){
        if(num[4] == '0' && num[5] == '0'){
            ans += " e ";
            ans += tresDig(last3dig);
        }else{
            ans += " ";
            ans += tresDig(last3dig);
        }
    }else{
        if(num[4] != '0'){
            ans += " e ";
            ans += doisDig(last2dig);
        }
        else{
            if(num[5] != '0'){
                ans += " e ";
                ans += umDig(num[5]);
            }
        }   
    }
    return ans;  
}

int main(){
    int num;
    string numero;
    string ans; 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    while(cin >> num){
        //Para lidar com números que começam com zero: 016 = 16... 0100 = 100, etc
        numero = to_string(num);
        switch(numero.size()){
            case 1:
                ans = umDig(numero[0]);
                break;
            case 2:
                ans = doisDig(numero);
                break;
            case 3:
                ans = tresDig(numero);
                break;
            case 4:
                ans = quatroDig(numero);
                break;
            case 5:
                ans = cincoDig(numero);
                break;
            case 6:
                ans = seisDig(numero);
                break;
        }

        cout << ans << endl;
    }

    return 0;
}
