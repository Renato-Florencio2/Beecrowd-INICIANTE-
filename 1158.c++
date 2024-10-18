#include <bits/stdc++.h>
using namespace std;
int main(){

	int n, xy[2];

	cin >> n;

	int resultados[n];

	for(int p = 0 ; p < n ; p++){
		resultados[p] = 0;
	}

	for(int i = 0 ; i < n ; i++){

		cin >> xy[0] >> xy[1];

		for(int o = 0 ; xy[1] > 0 ; o++){

			if((xy[0] + o) % 2 != 0){

				resultados[i] += xy[0] + o;
				xy[1]--;

			}
		}
	}

	for(int p = 0 ; p < n ; p++){
		cout << resultados[p] << endl;
	}

	return 0;
}