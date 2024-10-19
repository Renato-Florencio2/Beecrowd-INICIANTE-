#include <bits/stdc++.h>
using namespace std;
int main(){

    cout << fixed << setprecision(1);

	int linha;
	char operacao;
	double matriz[12][12], soma = 0;

	cin >> linha;
	cin >> operacao;

	for(int i = 0 ; i < 12 ; i++){

		for(int o = 0 ; o < 12 ; o++){

			cin >> matriz[i][o];

		}
	}

	for(int i = 0 ; i < 12 ; i++){

		soma += matriz[linha][i];

	}

	if(operacao == 'S'){

		cout << soma << endl;

	}else{

		cout << soma / 12 << endl;

	}

	return 0;
}
