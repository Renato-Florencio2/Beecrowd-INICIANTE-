#include <bits/stdc++.h>
using namespace std;
int main(){

    int caso, maior = 0;
    
    cin >> caso;

    int casos[caso];
    
    for(int i = 0 ; i < caso ; i ++){
       
       cin >> casos[i];
       
       if(casos[i] > maior) maior = casos[i]; 
        
    }
    
    long long fibonacci[maior+1];
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for(int o = 2 ; o <= maior ; o++){
        
        fibonacci[o] = fibonacci[o-1] + fibonacci[o-2];
        
    }
    
    for(int p = 0 ; p < caso ; p++){
        
        cout << "Fib(" << casos[p] << ") = " << fibonacci[casos[p]] << endl;
        
    }
    
    return 0;
}
