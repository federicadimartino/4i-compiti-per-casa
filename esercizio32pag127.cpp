// esercizio 32 pag 127

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int lato, area, perimetro;

    cout << "inserisci la misura del lato" << endl;
    cin >> lato;

    area= pow(lato,2);
    perimetro= lato*4;
   
    cout << "l'area è:" << area << endl;
    cout << "il perimetro è:" << perimetro << endl;

    return 0;
}


