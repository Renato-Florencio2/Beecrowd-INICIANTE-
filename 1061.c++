#include <bits/stdc++.h>
using namespace std;
int main(){

    int diasA, horasA, minuA, seguA;
    int dias=0, horas=0, minu=0, segu=0;

    //Entrada
    string lixo; // Para ignorar a palavra "Dia"

    // Lendo o início do evento
    cin >> lixo >> diasA;
    cin >> horasA; cin.ignore();
    cin >> minuA; cin.ignore();
    cin >> seguA;

    // Lendo o término do evento
    cin >> lixo >> dias;
    cin >> horas; cin.ignore();
    cin >> minu; cin.ignore();
    cin >> segu;

    //QI
    dias = dias - diasA;
    
    if(horasA == horas){
        horas = 0;
    }else{
        if(horasA > horas){
            horas = horas - horasA + 24;
            dias -= 1; 
        }else{
            horas = horas - horasA;
        }
    }

    if(minuA == minu){
        minu = 0;
    }else{
        if(minuA > minu){
            minu = minu - minuA + 60;
            horas -= 1; 
        }else{
            minu = minu - minuA;
        }
    }

    if(seguA == segu){
        segu = 0;
    }else{
        if(seguA > segu){
            segu = segu - seguA + 60;
            minu -= 1; 
        }else{
            segu = segu - seguA;
        }
    }

    //Saída

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minu << " minuto(s)" << endl;
    cout << segu << " segundo(s)" << endl;

    return 0;
}