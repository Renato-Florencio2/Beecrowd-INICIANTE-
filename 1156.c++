#include <bits/stdc++.h>
using namespace std;
int main(){

	cout << fixed << setprecision(2);

	double s = 1, dividendo = 1, divisor = 1;

	while(true){

		dividendo += 2;
		divisor *= 2;

		s += dividendo / divisor;

		if(dividendo == 39) break;

	}

	cout << s << endl;

	return 0;
}