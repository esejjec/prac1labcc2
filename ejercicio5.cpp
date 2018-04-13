#include <iostream>
using namespace std;

int tam(string cadena){
    int cont=0;
    while (cadena[cont]!='\0')
        cont++;
    return cont;
}

int tamp(char *a) {
	const char *p;
	char *q;
	p = a;
	cout<<p<<endl;
	q = a;
	cout<<q<<endl;
	cout<<a<<endl;
	while ( *a ) {q++;}
	return p-q;
}

int main()
{
    string cadena;
    cout << "Ingresa la cadena: \n";
    getline(cin,cadena);
    cout<<tam(cadena)<<endl;
    char s[10];
    char *a=s;
    cout << "Ingresa la cadena: \n";
    cin>>*a;
    cout<<LongitudCadena(a)<<endl;
    cout<<tamp(a)<<endl;;
}
