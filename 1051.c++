#include <bits/stdc++.h>
using namespace std;
int main(){

    double renda, imposto = 0;

    cin >> renda;

    if(renda <= 2000){
        cout << "Isento" << endl;
        return 0;
    }

    cout << fixed << setprecision(2);
    
    renda -= 2000;
    if(renda <= 1000){
        imposto += renda / 100 * 8;
        cout << "R$ " << imposto << endl;
        return 0;
    }
    
    renda -= 1000;
    imposto += 80;
    if(renda <= 1500){
        imposto += renda / 100 * 18;
        cout << "R$ " << imposto << endl;
        return 0;
    }

    renda -= 1500;
    imposto += 270 + renda / 100 * 28;

    cout << "R$ " << imposto << endl;

    return 0;
}