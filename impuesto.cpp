#include <iostream>

using namespace std;

int main() {
    int producto;
    float prod_final,iva = 0.19;

    cout<<"Digite el precio del producto";cin>>producto;

    prod_final = (producto * iva) + producto;

    cout<<"El precio final es: "<<prod_final;

    return 0;
}