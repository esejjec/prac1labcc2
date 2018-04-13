#include <iostream>
using namespace std;

void ingresar(double  M[][10] ,int f,int c){
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++){
            cout<<"valor ";
            cin>>M[i][j];}
    }
}
void mostrar(double  M[][10] ,int  f,int  c){
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++)
            cout<<M[i][j]<<"       ";
         cout<<endl;
    }
}
void mulmatri(double M[][10],int f,int c,double n[][10],int c2,double m[10][10]){
    for(int i=0; i<f; i++)
        for(int j=0; j<c; j++)
            for(int k=0; k<c2; k++){
                m[i][j]=m[i][j]+M[i][k]*n[k][j];
                cout<<m[i][j]<<" ";
}}


int main()
{
    double M[10][10],n[10][10],m[10][10];
    int f,c,f2,c2;
    cout<<"matriz 1 \n"<<"filas? ";cin>>f;
    cout<<"columnas? ";cin>>c;
    ingresar(M,f,c);
    cout<<"matriz 2 \n";
    cout<<"El # de filas es "<<c<<" por regla \n";
    cout<<"columnas? ";cin>>c2;
    ingresar(n,c,c2);
    mostrar(M,f,c);
    cout<<endl;
    mostrar(n,c,c2);
    cout<<endl;
    ///inicializar m
    for(int i=0;i<f;i++)
        for(int j=0;c2<2;j++)
            m[i][j]=0;
    mulmatri(M,f,c,n,c2,m);
    cout<<"matriz multiplicada \n";
    mostrar(m,f,c2);
}
