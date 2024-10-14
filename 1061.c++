#include <bits/stdc++.h>
using namespace std;
int main(){

    int di, hi, mi, si, df, hf, mf, sf;
    string lixo;

    cin >> lixo >> di;
    cin >> hi >> lixo >> mi >> lixo >> si;
    cin >> lixo >> df;
    cin >> hf >> lixo >> mf >> lixo >> sf;

    hi += di * 24;
    mi += hi * 60;
    si += mi * 60;

    hf += df * 24;
    mf += hf * 60;
    sf += mf * 60;

    sf -= si;

    mf = sf / 60;
    sf = sf % 60;
    hf = mf / 60;
    mf = mf % 60;
    df = hf / 24;
    hf = hf % 24;


    cout << df << " dia(s)" << endl;
    cout << hf << " hora(s)" << endl;
    cout << mf << " minuto(s)" << endl;
    cout << sf << " segundo(s)" << endl;
 
    return 0;
}