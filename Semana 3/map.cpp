#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;
    m["enero"] = 31; // (enero,31)
    m["febrero"] = 28; // (febrero, 28)
    m["marzo"] = 31; // (marzo,31)
    m.insert(make_pair("abril",30)); // (abril,30)
    // Recorremos el mapa
    for(auto elem: m){
        cout<<elem.first<<" -> "<<elem.second<<endl;
    }
    cout<<endl;
    cout<<m["rodo"]<<endl;// Imprime el valor de la llave abril
    // Recorremos el mapa
    for(auto elem: m){
        cout<<elem.first<<" -> "<<elem.second<<endl;
    }
}