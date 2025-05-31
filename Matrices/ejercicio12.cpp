/*sumar la primera fila de la matriz*/
/*sumar la ultima fila de la matriz*/
#include<iostream>
using namespace std;
int main(){
    int filas, columnas, suma=0;
    cout<<"ingrese el numero de filas "; cin>>filas;
    cout<<"ingrese el numero de columnas "; cin>>columnas;
    int matriz[filas][columnas];
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"ingrese un numero en la posicion(fila) ["<<i<<"] y la columna ["<<j<<"]";
            cin>>matriz[i][j]; 
        }
    }
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<" "<<matriz[i][j]<<" "; 
        }
        cout<<"\n";
    }
    /*sumar la primera fila*/
    for(int j = 0; j < columnas; j++){
        suma += matriz[filas - 2][j];
    }
    cout<<"El resultado es: "<<suma;
    return 0;
}