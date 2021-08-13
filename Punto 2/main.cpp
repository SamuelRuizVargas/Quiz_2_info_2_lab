#include <iostream>
#include <string.h>

using namespace std;

int len(char []={});

int main()
{
    cout << "Quiz #2 - Samuel Ruiz Vargas - CC: 1000898936"<<endl;
    cout << "Punto 2"<<endl;

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

    int n=3;
    string cadena2, cero="0", cadena_copy;
    for(int i=0;i<=len(cadena);i++)
    {
        digito=cad_numerica[i];
        cadena2+=digito;
    }



    int longi=cadena2.length(), suma=0, multiplicador, numero_sumar, digi_to_num, suma_inter;
    bool par=false, cad_par=false;
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
        cadena2=cero+cadena;
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
    cout<<"Suma: "<<suma<<"."<<endl;
    cout<<"SIN TERMINAR: VALOR DE SUMA HERRONEO "<<suma<<"."<<endl;

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
