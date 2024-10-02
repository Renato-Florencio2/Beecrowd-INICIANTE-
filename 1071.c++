#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int x, y, r = 0;
    
    cin >> x;
    cin >> y;
    
    if(x == y){
        goto final;
    }
    
    if(x > y){
        for(int i = y + 1 ; i < x ; i++){
            if(i % 2 != 0){
                r += i;
            }
        }
        
    }else{
        for(int i = x + 1 ; i < y ; i++){
            if(i % 2 != 0){
                r += i;
            }
        }
    }
    
    final:
    
    cout << r << endl;
 
    return 0;
}