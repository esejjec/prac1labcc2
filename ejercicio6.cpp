#include <iostream>
using namespace std;


int tam(char cadena[]){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return 0;
}
void conpiarst(char s[10], char t[10], int j, int i){
    if (j<=i)
        for (int x=0;x<i;x++)
            t[x]=s[x];
    else
        cout<<" El tamaño de s no es suficiente \n";
}

void copiarPun(char *s,char *t, int j, int i){
    if (j<=i)
        for (int x=0;x<i;x++){
            *s=*t;
            s++;
            t++;}
    else
        cout<<" El tamaño de s no es suficiente \ns";
}
int main()
{
    char t[10],s[10];
    cout << "Ingresa la cadena s: \n";
    cin>>s;
    cout << "Ingresa la cadena t: \n";
    cin>>t;
    int j=tam(t);
    int i=tam(s);
    conpiarst(t,s,j,i);
    char* s2=new char[100];
    char* t2=new char[100];
    cout<<"¿Cadena s2?"<<endl;
    cin>>s2;
    cout<<"¿Cadena t2?"<<endl;
    cin>>t2;
    int j2=tam(t);
    int i2=tam(s);
    copiarPun(s2,t2,j2,i2);
}
