#include <iostream>
using namespace std;

int tam(char cadena[10]){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return cont;
}
bool esPalindromo(char cadena[10], int tam){
    for(int i = 0; i < tam/2; i++)
        if(cadena[i] != cadena[tam-i-1])
            return false;
    return true;
}
int main()
{
    char cadena[10];
    cout << "Ingresa la cadena: ";
    cin>>cadena;
    if (esPalindromo(cadena,tam(cadena))==true)
        cout << "Es palindromo \n";
    else
        cout << "No es palindromo \n";

    return 0;
}
