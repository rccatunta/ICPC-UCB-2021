#include <iostream>
#include <cstdio> // para usar printf y scanf
#include <cstring> // Para usar memset
#include <vector> // Para usar vectores
using namespace std;

int main(){
    // ARREGLOS TRADICIONALES
    int a[10]; //Arreglo, no puede crecer en tamaño
    memset(a,-1,sizeof a);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    // CONSTRUCTORES
    vector<int>v; // vector vacio
    vector<float>v2(10); // vector de tamaño 10 en el que cada elemento es 0
    vector<string>v3(8,"ingeniero"); // vector de tamaño 8 en el que cada elemento es "ingeniero"
    vector<float>v4(v2); // Vector que es copia de v2

    // ACCESO
    // C++ Tradicional
    for(int i=0;i<v3.size();i++){
        printf("%d ",v3[i]);
    }
    printf("\n");
    // cin cout
    // C++ 11
    for(auto elemento: v4){
        printf("%d ",elemento);
    }
    printf("\n");

    // PEDIDO DE UN VECTOR
    int cantidad_elementos,x;
    cin>>cantidad_elementos;
    for(int i=0;i<cantidad_elementos;i++){
        cin>>x;
        v.push_back(x); // Añadimos el elemento x al vector
    }
    v.pop_back(); // Quita el ultimo elemento
    v.insert(v.begin(),3); // v.insert(iterador,elemento)
    v.insert(v.begin()+3,100); // Inserta un elemento en la posicion 3
    v.erase(v.begin()+1); // Borramos el elemento de la posicion 1
    v.resize(25,81); // Redimensionamos el vector
    
    printf("El contenido del vector v es: ");
    for(auto elemento: v){
        printf("%d ",elemento);
    }
    printf("\n");
    printf("El primer elemento del vector v4 es: %d\n",v.front());
    printf("El ultimo elemento del vector v4 es: %d\n",v.back());
    // MODIFICAR

    return 0;
}