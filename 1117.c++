#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(2);

	int controle = 0;
	double n1, n2, nteste;

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

	return 0;
}