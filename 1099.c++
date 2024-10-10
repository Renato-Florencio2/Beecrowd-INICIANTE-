#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int ent, nc, nf;

	cin >> ent;

	int vetor[ent];

	for(int p = 0 ; p < ent ; p++){
		vetor[p] = 0;
	}

	for(int i = 0 ; i < ent ; i++){
		cin >> nc;
		cin >> nf;
		if(nf < nc) swap(nc, nf);
		for(int o = nc+1 ; o < nf ; o++){
			if(o % 2 != 0){
				vetor[i] += o;
			}
		}
	}

	for(int l = 0 ; l < ent ; l++){
		cout << vetor[l] << endl;
	}

	return 0;
}
