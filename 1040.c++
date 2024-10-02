#include <bits/stdc++.h>
using namespace std;
int main() {
 
    double n1, n2, n3, n4, media, n5=0;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 4;
    n4 = n4 * 1;
    media = (n1 + n2 + n3 + n4) / 10;
    
    cout << fixed << setprecision(1);
    
    if(media >= 7){
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
        return 0;
    }
    
    if(media < 5){
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
        return 0;
    }
    
    cin >> n5;
    
    cout << "Media: " << media << endl;
    cout << "Aluno em exame." << endl;
    cout << "Nota do exame: " << n5 << endl;
    media = (media + n5) / 2;
    
    if(media >= 5){
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " << media << endl;
    }else{
        cout << "Aluno reprovado." << endl;
        cout << "Media final: " << media << endl;
    }
    
    return 0;
}