#include <bits/stdc++.h>
using namespace std;
int main(){

    cout << fixed << setprecision(4);

    double vetor[100], valor;

    cin >> valor;

    vetor[0] = valor;
    
    cout << "N[0] = " << vetor[0] << endl;

    for(int i = 1 ; i < 100 ; i++){

        vetor[i] = vetor[i - 1] / 2;
        
        cout << "N[" << i << "] = " << vetor[i] << endl;

    }

    return 0;
}