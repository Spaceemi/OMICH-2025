#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void solve()
{
  
ll n,k; cin>>n>>k;  
//definimos un vector de tamaño n
vector<ll>arr(n);

for(int i=0; i<n; i++)cin>>arr[i];

//en este caso se va a simular especie de punteros declarando nuestro left y right
//porque lo que queremos que se haga es que como las filas van consecutivas 
//pues se ahorre tiempo calculando las sumas cuando solo se puede guardar lo que este entre l y r
//y si avanza l se lo restamos a lo que llevemos en sum y donde llegue r se lo sumamos

ll l=0,r=0,sum=0,resul=0;

 //calculamos la suma inicial de los primeros k element
 //si el tamaño de la ventana es igual o mayor al numero de elementos 
//entonces tomamos el menor para asegurar que r no se pase y acceda a una posicion incorrecta
//caso k > n pero pues no era necesario
        while(r<min(n,k)){
            sum+=arr[r]; r++;
        }

        //si la primer ventana es el mejor resultado lo aseguramos 
        //tomando el mayor entre lo que se guardo en sum y resul
        resul= max(sum,resul);

        //mientras que el numero de de r sea menor al total de numero se sigue y asi nos evitamos
        //el caso anterior
        while(r < n){
            sum-=arr[l];
            sum+=arr[r];
            resul=max(sum,resul); 
            l++;
            r++;
        //entonces l y r avanzan mientras (r < n)
        //tomamops la suma de l y r y consevas lo de enmedio una especie de prefix
        }
cout<<resul<<"\n";


}


int main()
{
      cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
