#include <bits/stdc++.h>
using namespace std;
int main(){
    
    double sa, sn, re;
    int per;
    
    cin >> sa;
    
    if(sa <= 400){
        re = sa / 100 * 15;
        per = 15;
        sn = sa + re;
        goto final;
    }
    
    if(sa <= 800){
        re = sa / 100 * 12;
        per = 12;
        sn = sa + re;
        goto final;
    }
    
    if(sa <= 1200){
        re = sa / 100 * 10;
        per = 10;
        sn = sa + re;
        goto final;
    }
    
    if(sa <= 2000){
        re = sa / 100 * 7;
        per = 7;
        sn = sa + re;
        goto final;
    }else{
        re = sa / 100 * 4;
        per = 4;
        sn = sa + re;
    }
    
    final:
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << sn << endl;
    cout << "Reajuste ganho: " << re << endl;
    cout << "Em percentual: " << per << " %" << endl;

    return 0;
}