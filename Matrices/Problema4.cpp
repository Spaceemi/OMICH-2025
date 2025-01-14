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

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin>>n>>m;
    int mat[n][m];
    
    bool aux[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
            aux[i][j]=0;
        }
    }
    
    int x, y;
    cin>>x>>y; // Dimensiones de la submatriz a buscar
    
    int sub[x][y];
    
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>sub[i][j];
        }
    }
    
    bool b=1;
    
    for(int i=0; i<n-(x-1); i++){
        for(int j=0; j<m-(y-1); j++){
            
            b=1; // Indicar si en algún momento
            //      La submatriz no coincide
            
            for(int k=i; k<i+x; k++){
                for(int w=j; w<j+y; w++){
                    if(mat[k][w]!=sub[k-i][w-j]){
                        b=0;
                        //cout<<"Diferente en "<<k<<" "<<w;
                        //cnl;
                        break;
                    }
                }
                if(!b){
                    break;
                }
            }
            
            if(b){
                for(int k=i; k<i+x; k++){
                    for(int w=j; w<j+y; w++){
                        aux[k][w]=1;
                    }
                }
            }
            
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<aux[i][j]<<" ";
        }
        cnl;
    }
    
    return 0;
}

// Sieg Zeon
