#include <bits/stdc++.h>
using namespace std; 
int main (){
    cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    //fila x columna(m)
    int n,m; cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
            
        }
    }
    //: Lo inicialicé con INT_MAX para asegurar
    //que los cálculos de mínimo funcionen correctamente desde el inicio.
    vector<int>mini(m, INT_MAX);
    
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

//el vector en la posicion de cada m(fila) tendra el valor del minimo entre si mismo y el valor que
//encuentre la matriz en la poscion actual
//porque queremos asegurarnos de que el primer numero con el que se compare
//sea siempre mas pequeño que este valor inicial
mini[j]=min(mini[j],matrix[i][j]);
    }
     }
   
   for(int i=0; i<m; i++){
       cout<<mini[i]<<" ";
   } 
   
   return 0; 
}
