//es 40 pag 128
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,q,xp,yp;
    cout<<"dimmi coefficente angolare e termjine noto della retta"<<endl;
    cin>>m>>q;
    cout<<"dammi le coordinate del punto p dando la precedenza all'ordinata"<<endl;
    cin>>yp>>xp;
    yp=m*xp+q;
    if(m*xp+q-yp==0){
        cout<<"il punto p appartiene alla retta"<<endl;
        }else{
        cout<<"il punto p non appartiene alla retta"<<endl;
        }
        return 0;
}
