#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int casos;
	
	cin >> casos;
	
	for(int i = 1 ; i < casos + 1 ; i++){
		
		string sheldon, raj;
		
		cin >> sheldon >> raj;
		
		if(sheldon == "papel"){
			
			if(raj == "tesoura" || raj == "lagarto") cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
			if(raj == "papel") cout << "Caso #" << i << ": De novo!" << endl;
			
			if(raj == "pedra" || raj == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
			
		} 
		if(sheldon == "pedra"){
			
			if(raj == "papel" || raj == "Spock") cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
			if(raj == "pedra") cout << "Caso #" << i << ": De novo!" << endl;
			
			if(raj == "tesoura" || raj == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
			
		}
		if(sheldon == "tesoura"){
			
			if(raj == "pedra" || raj == "Spock") cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
			if(raj == "tesoura") cout << "Caso #" << i << ": De novo!" << endl;
			
			if(raj == "papel" || raj == "lagarto") cout << "Caso #" << i << ": Bazinga!" << endl;
			
		}
		if(sheldon == "lagarto"){
			
			if(raj == "pedra" || raj == "tesoura") cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
			if(raj == "lagarto") cout << "Caso #" << i << ": De novo!" << endl;
			
			if(raj == "papel" || raj == "Spock") cout << "Caso #" << i << ": Bazinga!" << endl;
			
		}
		if(sheldon == "Spock"){
			
			if(raj == "lagarto" || raj == "papel") cout << "Caso #" << i << ": Raj trapaceou!" << endl;
			
			if(raj == "Spock") cout << "Caso #" << i << ": De novo!" << endl;
			
			if(raj == "pedra" || raj == "tesoura") cout << "Caso #" << i << ": Bazinga!" << endl;
			
		}
		
	}
	
	return 0;
}