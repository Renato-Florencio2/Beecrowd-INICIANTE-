#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int v, pa = 0, im = 0, ne = 0, po = 0;
    
    for(int i = 0 ; i < 5 ; i++){
        cin >> v;
        if(v % 2 == 0){
            pa += 1;
        }else{
            im += 1;
        }
        
        if(v != 0){
            if(v > 0){
                po += 1;
            }else{
                ne += 1;
            }
        }
    }
    
    cout << pa << " valor(es) par(es)" << endl;
    cout << im << " valor(es) impar(es)" << endl;
    cout << po << " valor(es) positivo(s)" << endl;
    cout << ne << " valor(es) negativo(s)" << endl;
    
    return 0;
}
