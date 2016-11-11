// esercizio 36 pag 127

#include<iostream>

using namespace std;

int main() {

    int eta1, eta2, eta3, scambio;
    cout <<"inserire le tre eta"<< endl;
    cin >> eta1;
    cin >> eta2;
    cin >> eta3;

    if (eta1>eta2){
     scambio=eta1;
     eta1=eta2;
     eta2=scambio;
    }
    if (eta1>eta3){
     scambio=eta1;
     eta1=eta3;
     eta3=scambio;
    }
    if (eta2>eta3){
     scambio=eta2;
     eta2=eta3;
     eta3=scambio;
    }
    cout << eta1 << "," << eta2 << "," << eta3 << endl;
  return 0;
}
