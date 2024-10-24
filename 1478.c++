#include <bits/stdc++.h>
using namespace std;
int main(){
	
	while(true){
		
		int tamanho;
		
		cin >> tamanho;
		
		if(tamanho == 0) break;
			
		int matriz[tamanho][tamanho];
		
		for(int i = 0 ; i < tamanho ; i++){
			
			for(int l = 0 ; l < tamanho - i ; l++){
					
				for(int c = i ; c < tamanho ; c++){
					
					matriz[l][c] = i + 1;
					
					matriz[c][l] = i + 1;		
					
					l++;
					
				}
				
			}
			
		}
		
		for(int li = 0 ; li < tamanho ; li++){
			
			for(int co = 0 ; co < tamanho ; co++){
				
				if(co == 0) cout << setw(3) << setfill(' ') << matriz[li][co];
				else cout << setw(4) << setfill(' ') << matriz[li][co];
			}
			
			cout << endl;
			
		}
		
		cout << endl;
	
	}
	
	return 0;
}