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
    //para guardar que se cumpla las filas y columnas
    vector<int>filas(n,1),columnas(m,1);

//primero verificamos filas
     for(int i=0; i<n; i++){
         //creamo un vector que marque los numeros vistos
         //este ya debe de tener el tamaño de n+m<<
         vector<int>vistos(n+m+1,0);
        for(int j=0; j<m; j++){
            int num=matrix[i][j];
            if(num<1 || num>n+m|| vistos[num]){
                //si se cumple por lo tsnto ddescartamos
                filas[i]=0; break;
            }
            vistos[num]=1; //marco el numero que ya fue visto

        }
    }
    
    
    /*
    
    ahora verificamos columnas y el mismo proceso solo cambiando las restricciones
    solo que en este segundo se comienza con j porque estamos verificando las 
    columnas por lo tanto cada columna debe chwcarse de manera independiente
    iterando sobre todos los elementos de esa columna
    (es decir, recorriendo todas las filas correspondientes a esa columna).

el indice j controla que columna estamos checando mientras que el indice i
recorre las filas para acceder a cada elemento de esa columna
esto asegura que se evalue cada numero en una columna antes de pasar a la siguiente
    
    */
    for(int j=0; j<m; j++){
        //creamos nuestro vector auxilar
        vector<int>vistos(n+m+1,0);
        for(int i=0; i<n; i++){
            int num=matrix[i][j];
            if(num<1||num>n+m||vistos[num]){
                columnas[j]=0; break;
            }
            vistos[num]=1;
        }
    }
   
   //imprimir por ultimo
   for(int i=0; i<n; i++){
       cout<<filas[i]<<" ";
   }
   cout<<"\n"; for(int i=0; i<m; i++){
       cout<<columnas[i]<<" ";
   }
   
   return 0; 
}
