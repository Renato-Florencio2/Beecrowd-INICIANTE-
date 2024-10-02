#include <bits/stdc++.h>
using namespace std;
int main(){

    double valores[6];
    int quant = 0;

    for(int i = 0 ; i < sizeof(valores)/8 ; i++){
        cin >> valores[i];
        if(valores[i] > 0){
            quant += 1;
        }
    }

    cout << quant << " valores positivos" << endl;

    return 0;
}   
// Cara, é muito loco como funciona o sizeof kkk, tipo, não era necessário mas é legal