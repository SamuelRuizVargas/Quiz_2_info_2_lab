#include <iostream>
#include <string.h>

using namespace std;

int len(char []={});

int main()
{
    cout << "Quiz #2 - Samuel Ruiz Vargas - CC: 1000898936"<<endl;
    cout << "punto #8 practica 2"<<endl;

    char cadena[50]={}, caracter;
    int posi=0;
    cout<<"Solo cadenas de hasta 50 caracteres"<<endl<<endl;
    bool parar=false;
    while (parar==false)
    {
        cout<<"Ingrese un digito de la cadena (* para parar): ";cin>>caracter;
        if(caracter==42)
        {
            parar=true;
        }
        else
        {
            cadena[posi]=caracter;
            posi++;
        }

    }
    char cad_numerica[50]={},digito, cadena_original[50]={};
    int contador=-1, contador2=-1;

    for(int i=0;i<=len(cadena);i++)
    {
        digito=cadena[i];
        if(digito>=48 and digito<=57)
        {
            contador++;
            cad_numerica[contador]=digito;
        }
        else
        {
            contador2++;
            cadena_original[contador2]=digito;
        }
    }


    cout << "Original: ";
    for(int i=0;i<=len(cad_numerica);i++)
    {
        cout<<cad_numerica[i];
    }
    cout<<endl;
    /*
    cout << "Texto: ";
    for(int i=0;i<=len(cadena_original);i++)
    {
        cout<<cadena_original[i];
    }
    cout << "Numero: ";
    for(int i=0;i<=len(cad_numerica);i++)
    {
        cout<<cad_numerica[i];
    }
    cout<<endl;
    */
}

int len(char textos[])
{
    int contador=0;
    while (textos[contador]!=0)
    {
        contador++;
    }
    return contador;
}
