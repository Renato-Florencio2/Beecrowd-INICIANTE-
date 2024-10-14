#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(1);

	double x, y;
	int vezes;

	cin >> vezes;

	for(int i = 0 ; i < vezes ; i++){
		
		cin >> x >> y;

		if(y == 0){
			cout << "divisao impossivel" << endl;
		}else{
			cout << x / y << endl;
		}

	}

	return 0;
}