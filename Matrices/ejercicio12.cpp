/*sumar la primera fila de la matriz*/
/*sumar la ultima fila de la matriz*/
#include<iostream>
using namespace std;
int main(){
    int filas, columnas, suma=0, suma1=0, suma2=0;
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
    cout<<"suma de la primera fila"<<"\n";
    for(int j = 0; j < columnas; j++){
        suma += matriz[0][j];
    }
    cout<<"El resultado de la primera fila es: "<<suma<<endl;
    /*sumar la de la mitad*/
    cout<<"Suma de la mitad"<<"\n";
    for(int j = 0; j < columnas; j++){
        suma1 += matriz[filas / 2][j];
    }
    cout<<"El resultado de la mitad fila es: "<<suma1<<endl;
    /*sumar la ultima fila*/
    cout<<"suma de la ultima fila"<<"\n";
    for(int j = 0; j < columnas; j++){
        suma2 += matriz[filas - 1][j];
    }
    cout<<"El resultado de la ultima fila es: "<<suma2<<endl;
    
    return 0;
}