#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n1, n2, n3, m1, m2, m3;
    
    cin >> n1 >> n2 >> n3;
    
    if(n1 < n2 && n1 < n3){
        m1 = n1;
        if(n2 < n3){
            m2 = n2;
            m3 = n3;
        }else{
            m2 = n3;
            m3 = n2;
        }
    }

    if(n2 < n1 && n2 < n3){
        m1 = n2;
        if(n1 < n3){
            m2 = n1;
            m3 = n3;
        }else{
            m2 = n3;
            m3 = n1;
        }
    }

     if(n3 < n1 && n3 < n2){
        m1 = n3;
        if(n2 < n1){
            m2 = n2;
            m3 = n1;
        }else{
            m2 = n1;
            m3 = n2;
        }
     }
    
    
    cout << m1 << "\n" << m2 << "\n" << m3 << endl << endl;
    cout << n1 << "\n" << n2 << "\n" << n3 << "\n";
    
    return 0;
}
