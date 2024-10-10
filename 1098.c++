#include <bits/stdc++.h>
using namespace std;
int main(){

    double i = 0, j = 1;

    while(i <= 2){

        for(double o = j ; o <= j+2 ; o++){
            cout << "I=" << i << " J=" << o << endl;
        }

        i += 0.2;
        j += 0.2;
    }

    return 0;
}