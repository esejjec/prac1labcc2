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
	while ( *a ) {q++;a++;}
	return q-p;
}

int longiPun(char *s)
{
    int cont = 0;
    while(*(s+cont)!='\0'){
        cont++;
    }
    return cont;
}

int longitud(char *s)
{
    if(!(*s))
        return 0;

    return 1 + longitud(s + 1);
}

int  LongitudCadena(char *str)
{
    char *s;
    for (s = str; *s; ++s);
    return(s - str);
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
    cout<<longiPun(a)<<endl;
    cout<<longitud(a)<<endl;
    cout<<tamp(a)<<endl;;
}
