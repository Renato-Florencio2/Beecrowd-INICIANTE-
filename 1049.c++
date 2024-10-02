#include <bits/stdc++.h>
using namespace std;
int main() {
 
    string resp;
    
    cin >> resp;
    
    if(resp == "vertebrado"){
        cin >> resp;
        if(resp == "ave"){
            cin >> resp;
            if(resp == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            cin >> resp;
            if(resp == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
        
    }else{
        cin >> resp;
        if(resp == "inseto"){
            cin >> resp;
            if(resp == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            cin >> resp;
            if(resp == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    
    }
    return 0;
}