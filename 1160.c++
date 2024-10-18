#include <bits/stdc++.h>
using namespace std;
int main(){

	int Ncasos, pa, pb, anos = 0;
	double g1, g2;

	cin >> Ncasos;

	for(int i = 0 ; i < Ncasos ; i++){

		cin >> pa >> pb >> g1 >> g2;

		anos = 0;

		while(pa <= pb){
			pa += pa * g1 / 100;
			pb += pb * g2 / 100;
			anos++;

		    if(anos > 100) break;

		}

		if(anos <= 100) cout << anos << " anos." << endl;
		else cout << "Mais de 1 seculo." << endl;

	}

	return 0;
}