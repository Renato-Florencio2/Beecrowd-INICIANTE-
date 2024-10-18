#include <bits/stdc++.h>
using namespace std;
int main(){

    int vetor[1000];
    int valor;

    cin >> valor;

    for(int i = 0 ; i < 1000 ;){

        for(int o = 0 ; o < valor ; o++){

            vetor[i] = o;

            cout << "N[" << i << "] = " << vetor[i] << endl;

            i++;

            if(i == 1000) break;

        }

    }

    return 0;
}