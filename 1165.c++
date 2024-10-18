#include <bits/stdc++.h>
using namespace std;
int main(){

	int casos, n;
	bool primo;

	cin >> casos;

	for(int i = 0 ; i < casos ; i++){

		cin >> n;

		primo = true; 

		for(int o = n-1 ; o > 1 ; o--){

			if(n % o == 0) primo = false;
			
		}

		if(primo) cout << n << " eh primo" << endl;
		else cout << n << " nao eh primo" << endl;

	}

	return 0;
}