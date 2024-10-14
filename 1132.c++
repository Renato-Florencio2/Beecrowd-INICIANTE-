#include <bits/stdc++.h>
using namespace std;
int main(){

    int x, y, soma = 0;
    
    cin >> x; 
    cin >> y;

    if(y < x) swap(x, y);

    for(int i = x ; i <= y ; i++){
        
        if(i % 13 != 0){
        
            soma += i;
        
        }
    }

    cout << soma << endl;

    return 0;
}