#include <iostream>
using namespace std;

int tam(char *cadena){
    int cont=0;
    while (*cadena!='\0'){
        cont++;
        cadena++;
    }
    return cont;
}
int convertir_entero(char *s)
{
    int n = 0;
	for (; *s != 0; s++){
		n *= 10;
		n += *s - '0';
	}
	return n;
}

float convertir_float(char* s){
    bool flode;
    int i=0;
    int largo = tam(s);
    float resultado=0;

    for(i=0;i<largo;i++){
        if(s[i]=='.'){
            flode=true;
            i++;
            break;
        }
        resultado *=10;
        resultado += s[i]-'0';
    }

    if(flode){
        float decimal=10;
        for(int j=i; j<largo; j++){
            resultado+=(s[j]-'0')/decimal;
            decimal*=10;
        }
    }
    return resultado;
}

int main()
{
    char*cadena=new char[100];
    cout<<"ingrese una cadena "<<endl;
    cin>>cadena;
    cout<<cadena<<endl;
    float num= convertir_float(cadena);
    cout<<"El numero es:"<<num<<endl;
    cout<<num+17<<endl;
}
