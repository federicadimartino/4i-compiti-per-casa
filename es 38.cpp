//es 38 pag 127
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float PREZZO,SCONTO,PREZZOSCONTATO;
    cout<<"il prezzo dell'oggetto e?"<<endl;
    cin>>PREZZO;
    cout<<"per questo oggetto lo sconto e del?"<<endl;
    cin>>SCONTO;
    PREZZOSCONTATO=PREZZO-(PREZZO*SCONTO/100);
    cout<<"il prezzo scontato e"<<PREZZOSCONTATO<<endl;
    return 0;
}
