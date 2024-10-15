#include <bits/stdc++.h>
using namespace std;
int main(){

    int x[2], y, vezes;

    x[0] = 0;
    x[1] = 1;

    cin >> vezes; if(vezes == 0) return 0;

    if(vezes == 1){
        cout << x[0] << endl;
        return 0;
    }
    if(vezes == 2){
        cout << x[0] << " " << x[1] << endl;
        return 0;
    }

    cout << x[0] << " " << x[1] << " ";

    for(int i = 1 ; i <= vezes-2 ; i++){

        y = x[0] + x[1];
        x[0] = x[1];
        x[1] = y;

        if(i == vezes - 2){
            cout << y << endl;
        }else{
            cout << y << " ";
        }

    }

    return 0;
}