#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int tamanho;
	
	while(cin >> tamanho){
		
		int matriz[tamanho][tamanho], Sdiagonal = tamanho - 1, Qum = tamanho / 3;
		
		for(int li = 0 ; li < tamanho ; li++){
			for(int co = 0 ; co < tamanho ; co++){
				matriz[li][co] = 0;
			}
		}
		
		for(int c = 0 ; c < tamanho ; c++){
			
			for(int l = 0 ; l < tamanho ; l++){
				
				if(c == l) matriz[l][c] = 2;
				if(Sdiagonal == l) matriz[l][c] = 3;
				if(l >= Qum && c >= Qum && c <= tamanho - Qum-1 && l <= tamanho - Qum-1) matriz[l][c] = 1;
				if(l == tamanho / 2 && c == l) matriz[l][c] = 4;
				
			}
			
			Sdiagonal--;
			
		}
		
		for(int lin = 0 ; lin < tamanho ; lin++){
			
			for(int col = 0 ; col < tamanho ; col++){
				
				cout << matriz[lin][col];
				
			}
			
			cout << endl;
			
		}
		
		cout << endl;
			
	}
	
	return 0;
}