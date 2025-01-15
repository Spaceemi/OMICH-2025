#include <bits/stdc++.h> 
using namespace std;

int main (){
    cin.tie(0)->sync_with_stdio(0); 

    int n; cin>>n; 

    int k=n; // guardamos el tamaño de la matriz

    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int val; //en lugar de crear una matriz, utilizar una variable para
            //guardar el numero actual que este en la celda y ya proceder
            cin>>val;

            //y en lugar de haberlo hecho con matriz lo unixco con la variable es 
            //verificar si el num de la celda es igual al nivel de "profundidad" de la "capa"
            //osea si es 0 que este en el -> 0 0 0 
                                         // 0 1 0....
                                         
            //el nivel de la capa se calcula como el minio entre:
            //la distancia desde la fila actual al borde superior osea i.
            //la distancia desde la columna actual al borde izquierdo j.
            //la distancia desde la fila actual al borde de abajo n-i-1.
            //la distancia desde la columna actual al borde derecho n-j-1.
            if(val!=min({i,j,n-i-1,n-j-1})){//si se cumple pues es falso osea pues 0
                cout << 0; return 0;  
            }

            //para depuracion: imprimia el nivel esperado de la capa para cada celda en caso de que este mal
            // cout << min({i, j, n-i-1, n-j-1}) << " ";
        }

        // para depuracion: imprimia una nueva linea después de cada fila 
        // cout << "\n";
    }

    cout<<1; 
}
