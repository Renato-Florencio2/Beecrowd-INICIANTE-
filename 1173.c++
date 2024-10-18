#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int vetor[10];

	cin >> vetor[0];

	for(int i = 1 ; i < 10 ; i++){

		vetor[i] = vetor[i-1] * 2;
		
	}

	for(int o = 0 ; o < 10 ; o++){

		cout << "N[" << o << "] = " << vetor[o] << endl;

	}

	return 0;
}