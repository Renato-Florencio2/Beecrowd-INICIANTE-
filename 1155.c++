#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(2);

	double s = 1;

	for(double i = 2 ; i <= 100 ; i++){

		s += 1/i;

	}

	cout << s << endl;

	return 0;
}