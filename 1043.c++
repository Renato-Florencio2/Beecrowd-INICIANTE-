#include <bits/stdc++.h>
using namespace std;
int main() {
 
    double A, B, C, vf, perimetro, area; 
    
    cin >> A >> B >> C;
    
    cout << fixed << setprecision(1);
    
    if( A + B > C && A + C > B && B + C > A){
        perimetro = A + B + C;
        
        cout << "Perimetro = " << perimetro << endl;   

        return 0;
    }else{
        area = (B + A) * C / 2;
        
        cout << "Area = " << area << endl;
        
        return 0;
    }

    return 0;
}