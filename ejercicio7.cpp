#include <iostream>
using namespace std;

int tam(string cadena){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return cont;
}

void concatenar(char s[20],int i,char t[20], int j){
    if (i+j+1>0)
        for(int p = 0; p <i; p++)
            s[j+p]=t[p];
        s[i+j+1]='\0';

}
void concatenarP(char *s, char*t){
     while(*s != '\0')
        s++;
    while(*t !='\0'){
        *s=*t;
        s++;
        t++;
    }
    *s='\0';
}
int main()
{
    char s[10],t[10];
    std::cout << "Ingresa la cadena s: \n";
    cin>>s;
    std::cout << "Ingresa la cadena t: \n";
    cin>>t;
    int i=tam(s);
    int j=tam(t);
    cout<<s<<" "<<t<<endl;
    concatenar(s,i,t,j);
    cout<<s<<" "<<t<<endl;
    char* s2=new char[100];
    char* t2=new char[100];
    cout<<"¿Cadena s2?"<<endl;
    cin>>s2;
    cout<<"¿Cadena t2?"<<endl;
    cin>>t2;
    int j2=tam(t);
    int i2=tam(s);
    cout<<s2<<" "<<t2<<endl;
    concatenarP(s2,t2);
    cout<<s2<<" "<<t2<<endl;
}
