#include <bits/stdc++.h>
using namespace std;
int main(){

	int x=1, y=2;

	while(x != y){
		cin >> x >> y;
		if(x == y){
			break;
		}
		if(x < y){
			cout << "Crescente" << endl;
		}
		if(x > y){
			cout << "Decrescente" << endl;
		}
	}

	return 0;
}