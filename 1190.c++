#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(1);

	double matriz[12][12], soma = 0;
	char operacao;
	int condicao = 11;
	
	cin >> operacao;

	for(int i = 0 ; i < 12 ; i++){

		for(int o = 0 ; o < 12 ; o++){

			cin >> matriz[i][o];

			if(i < o && condicao < o) soma += matriz[i][o];

		}

		condicao--;

	}

	if(operacao == 'S') cout << soma << endl;
	else cout << soma / 30 << endl;

	return 0;
}