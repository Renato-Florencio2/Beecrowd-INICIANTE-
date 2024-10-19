#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(1);

	double matriz[12][12], soma = 0;
	char operacao;
	
	cin >> operacao;

	for(int i = 0 ; i < 12 ; i++){

		for(int o = 0 ; o < 12 ; o++){

			cin >> matriz[i][o];

			if(i < o) soma += matriz[i][o];

		}

	}

	if(operacao == 'S') cout << soma << endl;
	else cout << soma / 66 << endl;

	return 0;
}