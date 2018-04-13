#include <iostream>
using namespace std;

void mostarray(int a[100], int n){
    int i;
    for (i=0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void mergesort(double a[10],double aux[10],int inicio, int mitad, int finl){
    int inicio_end, num_elementos, aux_pos;
    inicio_end=mitad-1;
    aux_pos=inicio;
    num_elementos=finl-inicio+1;
    while((inicio <= inicio_end)&&(mitad<=finl)){
          if(a[inicio]<=a[mitad]){
                aux[aux_pos]=a[inicio];
                aux_pos++;
                inicio++;
          }
          else{
                aux[aux_pos]=a[mitad];
                aux_pos++;
                mitad++;
          }
    }
    while(inicio <= inicio_end){
        aux[aux_pos]=a[inicio];
        aux_pos++;
        inicio++;
    }
    while(mitad<=finl){
        aux[aux_pos]=a[mitad];
        aux_pos++;
        mitad++;
    }
    for(int i=0;i<=num_elementos;i++){
        a[finl]=aux[finl];
        finl--;
    }
}

void quicksort(double A[10], int primero, int ultimo){
    int central,i,j;
    double pivote;
    central =(primero+ultimo)/2;
    pivote =A[central];
    i=primero;
    j=ultimo;
    do
    {
        while(A[i]<pivote)j++; ///separa los valores menores al pivote
        while(A[j]>pivote)j--; ///separa los valores menores al pivo
        if(i<=j)
        {
            ///intercambio de valores
            double temp;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            i++;
            j--;
        }
    }
        while(i<=j);

        if (primero<j)
        quicksort(A,primero,j);
        if (j<ultimo) ///si va hacer menor que el ultimo
        quicksort(A,i,ultimo);
}

void insertionSort(int arr[10], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void mergesort(double a[10],double aux[10],int inicio, int mitad, int finl)
{
    int inicio_end, num_elementos, aux_pos;
    inicio_end=mitad-1;
    aux_pos=inicio;-
    num_elementos=finl-inicio+1;
    while((inicio <= inicio_end)&&(mitad<=finl)){
          if(a[inicio]<=a[mitad]){
                aux[aux_pos]=a[inicio];
                aux_pos++;
                inicio++;
          }
          else{
                aux[aux_pos]=a[mitad];
                aux_pos++;
                mitad++;
          }
    }
    while(inicio <= inicio_end){
        aux[aux_pos]=a[inicio];
        aux_pos++;
        inicio++;
    }
    while(mitad<=finl){
        aux[aux_pos]=a[mitad];
        aux_pos++;
        mitad++;
    }
    for(int i=0;i<=num_elementos;i+ +){
        a[finl]=aux[finl];
        finl--;
    }
}


int main()
{
    int a1[]={9,2,3,4,5};
    insertionSort(a1,5);
    mostarray(a1,5);
    double a2[]={1,9,8,5,6},au[]={};
    mergesort(a2,au,0,3,5)
    mostarray(a3,5);
    double a3[]={2,8,3,5,9};
    quicksort(a3,0,5);
    mostarray(a3,5);
    return 0;
}
