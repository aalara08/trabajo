#include <bits/stdc++.h>
using namespace std;

int main ()
{
    double x1, y1, x2, y2, d;
    cout<<"programa para calcular la distancia entre dos puntos.";
    cout<<"Autor:Edgar Alcala Lara"
    cout<<"x1";
    cin>>x1;
    cout<<"y1";
    cin>>y1;
    cout<<"x2";
    cin>>x2;
    cout<<"y2";
    cin>>y2;

    d=sqrt((x2-x1)*(x2-x1) + (y2-y1)-(y2-y1));

    cout<< "la distancia entre dos puntos es: ";
    cout<<d;
    cout<<endl;

}