#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n1, n2;
    
    cin >> n1 >> n2;
    
    if(n1 % n2 == 0 ^ n2 % n1 == 0){
        cout << "Sao Multiplos" << endl;
        
        return 0;
    }else{
        cout << "Nao sao Multiplos" << endl;
        
        return 0;
    }
    
    return 0;
}