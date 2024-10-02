#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int hi, hf, hj = 0;
    
    cin >> hi >> hf;
    
    if(hi == hf){
        hj = 24;
    }
    
    if(hi > hf){
        hj += hf;
        hj += (24 - hi);
    }
    
    if(hi < hf){
        hj += (hf - hi);
    }
    
    cout << "O JOGO DUROU " << hj << " HORA(S)" << endl;
    
    return 0;
}