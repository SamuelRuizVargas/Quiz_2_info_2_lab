#include <iostream>

using namespace std;

int main()
{
    cout << "Quiz #2 - Samuel Ruiz Vargas - CC: 1000898936"<<endl;
    cout << "punto #9 practica 2"<<endl;
    cout<< "NOTA: El usuario se debe asegurar que la cadena solo contenga numeros"<<endl;
    cout<<endl;

    int n=0;
    string cadena, cero="0", cadena_copy;
    cout<<"Ingrese la cadena de numeros: ";cin>>cadena;
    cout<<"Ingrese el tamanho de las particiones: ";cin>>n;
    int longi=cadena.length(), suma=0, multiplicador, numero_sumar, digi_to_num, suma_inter;
    bool par=false, cad_par=false;
    char digito;
    cadena_copy=cadena;

    if(n%2==0)
    {
        par=true;
    }

    if(longi%2==0)
    {
        cad_par=true;
    }

    if(par==true and cad_par==false or par==false and cad_par==true)
    {
        cadena=cero+cadena;
    }

    for(int i=longi;i>=0;i-=n)
    {
        suma_inter=0;
        multiplicador=1;
        for(int j=0;j<n;j++)
        {
            digito=cadena[i-j];
            digi_to_num=digito-48;
            digi_to_num=digi_to_num*multiplicador;
            suma_inter+=digi_to_num;
            multiplicador=multiplicador*10;
        }
        numero_sumar=suma_inter;
        suma+=numero_sumar;
    }
    cout<<"Original: "<<cadena_copy<<"."<<endl;
    cout<<"Suma: "<<suma<<"."<<endl;
}
