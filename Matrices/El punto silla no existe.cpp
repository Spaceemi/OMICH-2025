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
    cin>>n>>m; // Dimensiones de la matriz 
    
    int mat[n][m];
    char c;
    int min[n], pos[n];
    // Arreglos en los que guardaremos el menor de cada fila, así como su coordenada (columna).
    
    for(int i=0; i<n; i++){
        min[i]=125; // Declaramos el mínimo de cada fila como un valor grande, para luego cambiarlo por uno más pequeño.
        for(int j=0; j<m; j++){
            cin>>c; // Leemos cada espacio de de la matriz como un caracter.
            mat[i][j]=c-'a'; // Convertimos dicho caracter en un entero, donde a=0, b=1, etc... Y lo guardamos en la matriz.
            if(mat[i][j]<min[i]){
                min[i]=mat[i][j];
                // Si el nuevo caracter es más pequeño que el menor guardado hasta este punto,
                // entonces lo convertimos en el nuevo valor más pequeño.
                pos[i]=j;
                // Y también guardamos su coordenada (columna).
            }
        }
    }
    
    bool silla; // Nos va a indicar si un espacio de la matriz es o no un punto silla.
    
    for(int i=0; i<n; i++){ // Volvemos a recorrer la matriz, esta vez buscando el punto silla.
        int k=pos[i]; // k nos indicará la columna de cada mínimo.
        silla=1; // Al principio el indicador nos dice que un mínimo sí es silla.
        for(int j=0; j<n; j++){//Aquí recorremos toda la columna , k siempre valdrá lo mismo(reemplazo de j en un ciclo normal).
            if(mat[j][k]>min[i]){
                // Si hay algún punto mayor al menor de su fila (que debe ser también el mayor de su columna)
                // significa que no es punto silla, por lo que marcamos el indicador como 0 y pasamos a la siguiente fila.
                silla=0;
                break;
            }
        }
        if(silla){
            // Si no encontramos ningún valor mayor al mínimo de la fila, entonces este punto sí es silla.
            cout<<"Es el punto silla, es real, tomenme una foto con el!\n"<<i<<" "<<k<<nl;
            return 0;
            // Y terminamos la ejecución, ya ni pa' qué seguir.
        }
    }
    
    // Si llegamos hasta aquí significa que no encontramos el punto silla.
    cout<<"Oh no! Las conspiraciones se apoderaron de su mente!";
    // RIP :p
    
    return 0;
}

// Sieg Zeon
