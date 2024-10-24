#include <bits/stdc++.h>
using namespace std;
int main(){
	
	while(true){
		
		int a, b, c; 
		
		cin >> a >> b >> c;
		
		if(a == 0) break;
		
		int lado = sqrt(a * b * 100 / c);
		
		cout << lado << endl;
		 	
	}
	
	return 0;
}