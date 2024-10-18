#include <bits/stdc++.h>
using namespace std;
int main(){

	int casos, n, soma;

	cin >> casos;

	for(int i = 0 ; i < casos ; i++){

		cin >> n;

		soma = 0;

		for(int o = n-1 ; o > 0 ; o--){

			if(n % o == 0){
				soma += o;
			}

		}

		if(soma == n) cout << n << " eh perfeito" << endl;
		else cout << n << " nao eh perfeito" << endl;

	}

	return 0;
}