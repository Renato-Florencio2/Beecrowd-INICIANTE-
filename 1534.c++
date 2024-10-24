#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int tamanho;
	
	while(cin >> tamanho){
		
		int matriz[tamanho][tamanho];
		int controle = tamanho;
		
		for(int l = 0 ; l < tamanho ; l++){
			
			for(int c = 0 ; c < tamanho ; c++){
				
				if(l == c) matriz[l][c] = 1;
				else matriz[l][c] = 3;
				if(c+1 == controle){
					matriz[l][c] = 2;
					controle--;
				}
				
			}
			
		}
		
		for(int li = 0 ; li < tamanho ; li++){
			
			for(int co = 0 ; co < tamanho ; co++){
				
				cout << matriz[li][co]; 
				
			}
			
			cout << endl;
			
		}
		
	}
	
	return 0;
}