#include <bits/stdc++.h>
using namespace std;
int main(){

	int par[5], impar[5], valor, quantPar = 0, quantImpar = 0;

	for(int i = 0 ; i < 15 ; i++){

		cin >> valor;

		if(valor % 2 == 0){

			if(quantPar == 5){

				for(int o = 0 ; o < 5 ; o++){

					cout << "par[" << o << "] = " << par[o] << endl;

					par[o] = 0;

				}

				quantPar = 0;
			}

			par[quantPar] = valor;

			quantPar++;

		}
		else{

			if(quantImpar == 5){

				for(int p = 0 ; p < 5 ; p++){

					cout << "impar[" << p << "] = " << impar[p] << endl;

					impar[p] = 0;

				}

				quantImpar = 0;
			}

			impar[quantImpar] = valor;

			quantImpar++;
		}
	}

	for(int k = 0 ; k < 5 ; k++){

		if(impar[k] == 0) break;

		cout << "impar[" << k << "] = " << impar[k] << endl;

	}

	for(int l = 0 ; l < 5 ; l++){

		if(par[l] == 0) break;

		cout << "par[" << l << "] = " << par[l] << endl;

	}

	return 0;
}
