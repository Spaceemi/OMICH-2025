#include <bits/stdc++.h> 
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(); cout.tie(0); 

    int m,n;
    cin>>m>>n;

    int contador=1; //contador que comenzará en 1 para "rellenar" la matriz tipo un aux

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<contador<< " "; //mprimimos el valor actual del contador
            if(i%2==0) contador++; //y ya solo verificamos si la fila es par incrementa normal
            else contador--; //pero si la fila es impar decrementa 
        }
        
        cout<<"\n"; //este salto es para cammbiar de linea despues de imprimir una fila
        

        //reajustamos el contador para cambiar la dirección en la siguiente fila y comenzar al reves
        if(i%2==0) contador+=(n-1); //si la fila es par avanza el contador para la siguiente fila
        else contador+=(n+1); //si la fila es impar ajusta el contador para comenzar hacia adelante
    }

    return 0; 
}
