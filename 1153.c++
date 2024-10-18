#include <bits/stdc++.h>
using namespace std;
int main(){

	int n, valor;

	cin >> n;

	valor = n;

	for(int i = n-1 ; i >= 1 ; i--){

		valor *= i;

	}

	cout << valor << endl;

	return 0;
}