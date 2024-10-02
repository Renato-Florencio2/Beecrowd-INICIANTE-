#include <bits/stdc++.h>
using namespace std;
int main() {

	int m, p, v;

	for(int i = 1 ; i <= 100 ; i++){
		cin >> v;

		if(v > m){
			m = v;
			p = i;
		}
	}

	cout << m << endl;
	cout << p << endl;

	return 0;
}
