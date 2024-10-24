#include <bits/stdc++.h>
using namespace std;
int main(){

	int casos;

	while(cin >> casos){

		int maior = 0;

		for(int i = 0 ; i < casos ; i++){

			int velocidade;

			cin >> velocidade;

			if(velocidade > maior) maior = velocidade;

		}

		if(maior >= 20) cout << 3 << endl;
		if(maior >= 10 && 20 > maior) cout << 2 << endl;
		if(maior < 10) cout << 1 << endl;

	}

	return 0;
}