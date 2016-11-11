// esercizio 34 pag 127

#include<iostream>
using namespace std;

int main()
{
    int numero;

    cout << "inserisci un numero" << endl;
    cin >> numero;

    if (numero>0){

    for (int i=0; i<5; i++){
         numero= numero+1;
         cout<< numero<< endl;
        }
    }
    else {
    cout <<"il numero inserito deve essere maggiore di 0" ;
    }

    return 0;
}
