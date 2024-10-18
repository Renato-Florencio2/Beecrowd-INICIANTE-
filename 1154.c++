#include <bits/stdc++.h>
using namespace std;
int main(){

    cout << fixed << setprecision(2);

	double vezes = 0, soma = 0;
	int numero = 1;

	while(numero > 0){

		cin >> numero;

		if(numero > 0){
			soma += numero;
			vezes++;
		}
	}

	cout << soma / vezes << endl;

	return 0;
}