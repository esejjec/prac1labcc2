#include <iostream>
using namespace std;

int sumiterativa(const int a[10],const int tam){
    int cont=0;
    for(int i=0;i<tam;i++)
        cont=cont+a[i];
    return cont;
}

int sumrecur( const int a[10],int tam){
    if (tam<=0)
        return 0;
    else
        return a[tam-1]+sumrecur(a,tam-1);
}

int main()
{
    int a[]={5,2,3,4,5};
    cout << "la suma del areglo iterativamente es "<<sumiterativa(a,5)<< endl;
    cout << "la suma del areglo recursivamente es "<<sumrecur(a,5)<< endl;
    return 0;
}
