#include <bits/stdc++.h>
using namespace std;

int main(){
          cin.tie(0)->sync_with_stdio(0);

  int tam,mul,n; cin>>tam>>mul>>n;

  //la primera validacion es verificar que tam sea mayor que 0 y no exceda 10000
  if(tam<=0 || tam>10000){
    cout<<"Error";
    return 0;
  }

  //la segunda validacion es verificar que multiplo sea mayor que 0
  if(mul<=0){
    cout<<"Error";
    return 0;
  }

  //la tercera es verificar que n este en el rango valido de indices para un arreglo de tamaño tam
  // ademas n no debe ser negativo y debe ser menor que tam
  if (n<0 || n>=tam){
    cout << "Error";
    return 0;
  }

  //calculamos el valor mul*n+mul esta es una forma
  cout<<mul*n+mul;

//la otral

vector<int>arr(tam);
for(int i=0; i<tam; i++){
    if(i%mul==0)arr.push_back(i);

}
cout<<arr[n];

  return 0; 
}
