#include <bits/stdc++.h>
#define nl "\n"
#define cnl cout<<"\n"
#define ll long long
#define lli long long int
#define pb push_back
#define pf push_front
#define all(x) x.begin(), x.end()
//#define f first
//#define s second
#define lsb(x) (x & -x)
// lsb -> least significant bit = (Valor del...) Bit menos significativo

// Valores del código ascii:
// 'A' = 65 'Z' = 90
// 'a' = 97 'z' = 122
// '0' = 48 '9' = 57
//
//  Al dividir un numero entero y obtener como resultado un número real (número con punto decimal),
//  éste se redondeará hacia abajo.
//  Ejemplo: 20 / 3 = 6.6666 ---> resultado que se obtendrá = 6
//

using namespace std;

int main(){ // Sieg Zeon
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m; // Dimensiones de la matriz original (MO).
    int mat[n][m]; // Matriz original (MO).
    bool aux[n][m]; // Matriz en la que guardaremos las coincidencias encontradas:
                    // Aquí vamos a guardar los 0's y 1's. (MN).
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
            aux[i][j]=0;
            // Leer todos los espacios de la MO, y rellenar el mismo espacio de la MN con 0's.
        }
    }
    
    int x, y;
    cin>>x>>y; // Dimensiones de la submatriz a buscar
    
    int sub[x][y]; // La submatriz que vamos a buscar (SM).
    
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>sub[i][j];
            // Leemos la submatriz a buscar.
        }
    }
    
    bool b=1; // Nos va a indicar si en algún momento la SM deja de coincidir con la MO,
              // por lo que dejaremos de buscar y pasaremos a la siguiente iteración.
    
    for(int i=0; i<n-(x-1); i++){
        for(int j=0; j<m-(y-1); j++){
            // Recorremos toda la MO pero, en esta ocasión, no llegaremos hasta sus extremos, sino hasta 
            // el máximo punto al que puede llegar la esquina superior izquierda de la SM.
            // Básicamente no pasarnos de los límites de la MO con la SM.
            
            b=1; // Inicia indicando que sí coinciden
            
            for(int k=i; k<i+x; k++){ // Ahora, a partir de aquí recorremos la SM.
                for(int w=j; w<j+y; w++){
                    // Este for es cada fila de la SM.
                    
                    if(mat[k][w]!=sub[k-i][w-j]){
                        b=0; // Significa que la SM dejó de coincidir con la MO.
                        break; // No tiene caso seguir iterando sobre la SM, por lo que dejamos de recorrer las filas de la SM.
                    }
                }
                if(!b){
                    break; // Si ya falló el recorrido de la fila, entonces ya no tiene caso buscar,
                           // por lo que seguimos a la siguiente iteración.
                }
            }
            
            if(b){
                // Si se cumple la condición, significa que todos los espacios de la MO y la SM coincidieron,
                // por lo tanto, procedemos con llenar sus respectivas celdas con 1's en la MN.
                for(int k=i; k<i+x; k++){
                    for(int w=j; w<j+y; w++){
                        aux[k][w]=1; // Llenamos con 1's
                    }
                }
            }
            
        }
    }
    
    // Por último, simplemente mostramos cómo quedó la MN.
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<aux[i][j]<<" ";
        }
        cnl;
    }
    
    return 0;
}

// Sieg Zeon
