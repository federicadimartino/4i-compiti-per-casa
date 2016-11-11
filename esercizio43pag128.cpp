
#include<iostream>
using namespace std;

int main()
{
    char candidato1, candidato2;
    int votic1, votic2, percentualec1, percentualec2;

    cout<< "inserisci il nome del primo candidato" << endl;
    cin>> candidato1;
    cout<< "inserisci il nome del secondo candidato" << endl;
    cin>> candidato2;
    cout<< "inserisci il numero di voti del primo candidato" << endl;
    cin>> votic1;
    cout<< "inserisci il numero di voti del secondo candidato" << endl;
    cin>> votic2;

    percentualec1=votic1/(votic1+votic2)*100;
    percentualec2=votic2/(votic1+votic2)*100;

    if (percentualec1>percentualec2){

        cout<< candidato1<< percentualec1 << "% di voti" << endl;
        cout<< candidato2<< percentualec2 << "% di voti" << endl;
    }
    else {

        cout<< candidato2<< percentualec2 << "% di voti" << endl;
        cout<< candidato1<< percentualec1 << "% di voti" << endl;
    }

    return 0;
}

