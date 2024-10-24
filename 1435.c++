#include <bits/stdc++.h>
using namespace std;
int main(){
	
	while(true){
		
		int tamanho;

		cin >> tamanho;
		
		if(tamanho == 0) break;

		int matriz[tamanho][tamanho];
		
		for(int l = 0 ; l < tamanho ; l++){
			
			for(int c = 0 ; c < tamanho ; c++){
				
				int valor = min(min(l, c) , min(tamanho - l - 1, tamanho - c - 1)) + 1;
				
				matriz[l][c] = valor;
				
			}
			
		}

		for(int i = 0 ; i < tamanho ; i++){

			cout << setw(3) << setfill(' ') << matriz[0][0];

			for(int o = 1 ; o < tamanho ; o++){

				cout << setw(4) << setfill(' ') << matriz[i][o];
				
			}
			
			cout << endl;

		}

		cout << endl;
				
	}
	
	return 0;
}