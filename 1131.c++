#include <bits/stdc++.h>
using namespace std;
int main(){

	int resposta = 0, gInter, gGremio, vInter = 0, vGremio = 0, empates = 0, contGrenal = 0;

	while(resposta != 2){

		cin >> gInter >> gGremio;

		contGrenal++;

		if(gInter > gGremio){
			vInter++;
		} 
		if(gInter < gGremio){
			vGremio++;
		}
		if(gInter == gGremio){
			empates++;
		}

		cout << "Novo grenal (1-sim 2-nao)" << endl;

		cin >> resposta;

	}

	cout << contGrenal << " grenais" << endl;
	cout << "Inter:" << vInter << endl;
	cout << "Gremio:" << vGremio << endl;
	cout << "Empates:" << empates << endl;

	if(vInter > vGremio){
		cout << "Inter venceu mais" << endl;
	}
	if(vInter < vGremio){
		cout << "Gremio venceu mais" << endl;
	}
	if(vInter == vGremio){
		cout << "Nao houve vencedor" << endl;
	}

	return 0;
}