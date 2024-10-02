#include <bits/stdc++.h>
using namespace std;
int main(){

    int mi, mf, hi, hf;
    int mj, hj;

    cin >> hi >> mi >> hf >> mf;

    if(hi == hf && mi == mf){

        mj = 0;
        hj = 24;

    }else{

        mj = mf - mi;
        if(mj < 0){
            mj += 60;
            hf-=1; 
        }

        hj = hf - hi;
        if(hj < 0){
            hj += 24;
        }
    }

    cout << "O JOGO DUROU " << hj << " HORA(S) E " << mj << " MINUTO(S)" << endl;

    return 0;
}