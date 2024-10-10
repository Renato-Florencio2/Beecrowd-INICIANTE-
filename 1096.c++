#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int i = 1, j = 7;
 
    while(i <= 9){
        for(int o = j ; o >= 5; o--){
            cout << "I=" << i << " J=" << o << endl;
        }
        i+=2;
    }
 
    return 0;
}