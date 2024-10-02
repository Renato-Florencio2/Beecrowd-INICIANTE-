#include <bits/stdc++.h>
using namespace std;
int main() {

	cout << fixed << setprecision(1);

	int n;
	
	cin >> n;
	
	double v[n], m[n][3];

	for(int i = 0 ; i < n ; i++){
		for(int o = 0 ; o < 3 ; o++){
			cin >> m[i][o]; 
		}

		v[i] = (m[i][0]*2 + m[i][1]*3 + m[i][2]*5) / 10;
		cout << v[i] << endl;
	}

	return 0;
}
