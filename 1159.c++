#include <bits/stdc++.h>
using namespace std;
int main(){

	int x, soma, controle;

	while(true){

		cin >> x; if(x == 0) break;

		controle = 0;
		soma = 0;

		for(int i = 0 ; controle < 5 ; i++){
			if((x + i) % 2 == 0){
				soma += x + i;
				controle++;
			}
		}

		cout << soma << endl;
	}

	return 0;
}