#include <bits/stdc++.h>
using namespace std;
int main(){

	int casos, menor, numero;

	cin >> casos;

	int vetor[casos];

	for(int i = 0 ; i < casos ; i++){

		cin >> numero;

		vetor[i] = numero;

		if(i == 0) menor = vetor[i];

		if(vetor[i] < menor) menor = vetor[i];

	}

	for(int o = 0 ; o < casos ; o++){

		if(vetor[o] == menor){
			
			cout << "Menor valor: " << vetor[o] << endl;

			cout << "Posicao: " << o << endl;
		
			break;
		
		}

	}

	return 0;
}