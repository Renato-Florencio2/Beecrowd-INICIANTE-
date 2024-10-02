#include <bits/stdc++.h>
using namespace std;
int main() {

	cout << fixed << setprecision(0);

	double n, v, tr = 0, tc = 0, ts = 0, tt = 0;
	double perc, pers, perr;
	string s;

	cin >> n;

	for(int i = 0 ; i < n ; i++){
		cin >> v >> s;
		
		if(s == "C"){
			tc += v;
		}
		if(s == "R"){
			tr += v;
		}
		if(s == "S"){
			ts += v;
		}		
	}

    perc = (100*tc) / (tr+tc+ts);
    perr = (100*tr) / (tr+tc+ts);
    pers = (100*ts) / (tr+tc+ts);

	cout << "Total: " << tr+tc+ts << " cobaias" << endl;
	cout << "Total de coelhos: " << tc << endl;
	cout << "Total de ratos: " << tr << endl;
	cout << "Total de sapos: " << ts << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << perc << " %" << endl;
	cout << "Percentual de ratos: " << perr << " %" << endl; 
	cout << "Percentual de sapos: " << pers << " %" << endl;

	return 0;
}
