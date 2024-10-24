#include <bits/stdc++.h>
using namespace std;
int main(){
	
	while(true){
		
		int tamanho;
		
		cin >> tamanho;
		
		if(tamanho == 0) break;
		
		int matriz[tamanho][tamanho];
		matriz[0][0] = 1;
		
		for(int i = 1 ; i < tamanho ; i++){
			
			matriz[i][0] = matriz[i-1][0] * 2; 
			
		}
		
		for(int l = 0 ; l < tamanho ; l++){
			
			for(int c = 1 ; c < tamanho ; c++){
				
				matriz[l][c] = matriz[l][c-1] * 2;
				
			}
			
		}
		
		for(int li = 0 ; li < tamanho ; li++){
			
			for(int co = 0 ; co < tamanho ; co++){
				
				if(co == 0) cout << setw(log10(matriz[tamanho - 1][tamanho - 1]) + 1) << setfill(' ') << matriz[li][co];
				else cout << setw(log10(matriz[tamanho - 1][tamanho - 1]) + 2) << setfill(' ') << matriz[li][co]; 

			}
			
			cout << endl;
			
		}
		
		cout << endl;
		
	}
	
	
	return 0;
}