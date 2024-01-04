#include <iostream>
using namespace std;
int main()
{
    double nota1, nota2, nota3, promedio;

        cout<<"ingrese las notas: "<<endl;
        cin>>nota1;
        cout<<"ingrese las notas: "<<endl;
        cin>>nota2;
        cout<<"ingrese las notas: "<<endl;
        cin>>nota3;

    promedio=(nota1*0.15+nota2*0.35+nota3*0.50);

    cout<<"el promedio de las notas es:"<<promedio<<endl;

    return 0;


}