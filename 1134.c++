#include <bits/stdc++.h>
using namespace std;
int main(){

    int alcool = 0, gasolina = 0, diesel = 0, vteste = 0;

    while(vteste != 4){

        vteste = 0;

        while(vteste < 1 || vteste > 4){
         
            cin >> vteste;
        
        }

        if(vteste == 1){
            alcool++;
        }
        if(vteste == 2){
            gasolina++;
        }
        if(vteste == 3){
            diesel++;
        }

    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}