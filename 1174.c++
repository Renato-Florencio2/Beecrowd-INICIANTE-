#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout << fixed << setprecision(1);
    
    double vetor[100];
    
    for(int i = 0 ; i < 100 ; i++){
    
        cin >> vetor[i];
    
    }
    
    for(int o = 0 ; o < 100 ; o++){
    
        if(vetor[o] <= 10) cout << "A[" << o << "] = " << vetor[o] << endl;
    
    }
    
    return 0;
}