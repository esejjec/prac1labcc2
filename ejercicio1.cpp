#include <iostream>
using namespace std;

void valref(int &p,int a){
    cout << "por valor: " << a <<endl;
    cout << "por referencia: " << p <<endl;
}

int main()
{
 int a = 5;
 int &p = a;
 valref(p,a);
 return 0;
}
