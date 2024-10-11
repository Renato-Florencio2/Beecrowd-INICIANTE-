#include <bits/stdc++.h>
using namespace std;
int main(){

	int m = 1, n = 2, soma;

	while(n != 0){
		soma = 0;
		cin >> m >> n;
		if(n == 0 || m == 0 || m < 0 || n < 0) break;
		if(m > n) swap(m, n);
		for(int i = m ; i <= n ; i++){
			cout << i << " ";
			soma += i;
		}
		cout << "Sum=" << soma << endl;
	}

	return 0;
}