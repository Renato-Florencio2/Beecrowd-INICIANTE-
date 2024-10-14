#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(2);

	int controle = 0,reposta = 0;
	double n1, n2, nteste;

	while(reposta != 2){

		controle = 0;

		while(controle != 2){
			
			cin >> nteste;

			if(nteste >= 0 && nteste <= 10){

				controle += 1;

				if(controle == 1){
					n1 = nteste;
				}else{
					n2 = nteste;
				}

			}else{

				cout << "nota invalida" << endl;

			}

		}

		cout << "media = " << (n1 + n2) / 2 << endl;

		while(true){

			cout << "novo calculo (1-sim 2-nao)" << endl;

			cin >> reposta;

			if(reposta == 1 || reposta == 2) break;

		}

	}

	return 0;
}