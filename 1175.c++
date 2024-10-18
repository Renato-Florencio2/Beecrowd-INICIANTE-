#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n[20], p = 20;
    
    for(int i = 0 ; i < 20 ; i++){
    
        cin >> n[i];
    
    }
    
    for(int o = 0 ; o < 10 ; o++){
    
        p--;
        swap(n[o], n[p]);
    
    }
    
    for(int a = 0 ; a < 20 ; a++){
    
        cout << "N[" << a << "] = " << n[a] << endl; 
    
    }
    
    return 0;
}