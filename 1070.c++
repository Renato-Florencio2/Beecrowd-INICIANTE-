#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int x;
    
    cin >> x;
    
    if(x % 2 != 0){
        for(int i = x ; i <= x + 10 ; i++){
            if(i % 2 != 0){
                cout << i << endl;
            }
        }
    }else{
        for(int i = x ; i <= x + 12 ; i++){
            if(i % 2 != 0){
                cout << i << endl;
            }
        }
    }
    return 0;
}