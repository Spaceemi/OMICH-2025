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
    
    // Dimensiones de la matriz 
    
    int mat[n][m];
    char c;
    int min[n], pos[n];
    
    for(int i=0; i<n; i++){
        min[i]=125;
        for(int j=0; j<m; j++){
            cin>>c; //xd++;
            mat[i][j]=c-'a'; 
            if(mat[i][j]<min[i]){
                min[i]=mat[i][j];
                pos[i]=j;
            }
        }
    }
    //cout<<xd;
    
    bool silla;
    
    for(int i=0; i<n; i++){
        int k=pos[i];
        silla=1;
        for(int j=0; j<n; j++){//Aquí recorremos toda la columna (reemplazo de i), k siempre valdrá lo mismo(reemplazo de j)
            if(mat[j][k]>min[i]){
                silla=0;
                break;
            }
        }
        if(silla){
            cout<<"Es el punto silla, es real, tomenme una foto con el!\n"<<i<<" "<<k<<nl;
            return 0;
        }
    }
    
    cout<<"Oh no! Las conspiraciones se apoderaron de su mente!";
    
    /*
    char xd='a', dx='b';
    if(xd<dx){
        cout<<"Si";
    }*/
    
    return 0;
}

// Sieg Zeon
