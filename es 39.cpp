//es 39 pag 128
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool PERPENDICOLARI;
    float m1,m2;
    cout<<"dammi coefficente angolare della prima retta "<<endl;
    cin>>m1;
    cout<<"dammi coefficente angolare della seconda retta "<<endl;
    cin>>m2;

    if(m1*m2==-1){
        PERPENDICOLARI==true;
        cout<<"le rette sono perpendicolari"<<endl;
    }else{
        PERPENDICOLARI==false;
        cout<<"le rette non sono perpendicolari"<<endl;}

    return 0;
}
