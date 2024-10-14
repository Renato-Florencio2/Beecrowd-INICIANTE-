#include <bits/stdc++.h>
using namespace std;
int main(){

    int n, pum = 0;

    cin >> n;

    for(int i = 1 ; i <= n*4 ; i++){
        
        pum++;

        if(pum % 4 == 0){
            cout << "PUM" << endl;
        }else{
            cout << i << " ";
        }

    }

    return 0;
}