#include <bits/stdc++.h>
using namespace std;
int main(){

    int x, z, soma = 0, contagem = 0;

    cin >> x >> z; while(x >= z) cin >> z;

    for(int i = 0 ; soma <= z ; i++){
    
        soma += x + i;

        contagem++;
    
    }

    cout << contagem << endl;

    return 0;
}