#include <iostream>
using namespace std;

int tam(char cadena[]){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return cont;
}

void intercambio(char s[100],int p){
    char tem;
    for(int i=0;i<(p/2);i++){
        tem=s[i];
        s[i]=s[p-i];
        s[p-i]=tem;
    }
    cout<<s<<endl;
}


void intercambioP(char *s,int i){
    const char *tem1= new char [100];
    tem1=s;
    while(*tem1 != '\0')
        tem1++;
    char tem;
    while(*s != '\0'){
        tem=*tem1;
        *s=tem;
        s++;
        tem1--;
    }
    cout<<s<<endl;
}

int main()
{
    char s[10];
    cout << "Ingresa la cadena s: \n";
    cin>>s;
    int i=tam(s);
    cout<<s<<endl;
    intercambio(s,i);
    cout<<s<<endl;

    char* s2=new char[100];
    cout<<"¿Cadena s2?"<<endl;
    cin>>s2;
    int i2=tam(s);
    cout<<s2<<endl;
    intercambioP(s2,i2);

    return 0;
}
