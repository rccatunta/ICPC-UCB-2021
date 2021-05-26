#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    vector<int>v;
    int arr[10];
    int n,dato;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>dato;
        v.push_back(dato);
    }

    //ORDENAR DE MENOR A MAYOR
    sort(arr,arr+10); // Ordenamiento de un arreglo
    sort(v.begin(),v.end()); // Ordenamiento de un vector

    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<binary_search(v.begin(),v.end(),100)<<endl;

    // FORMA 2 de PEDIR UN VECTOR
    vector<int>u;
    cin>>n;
    u.assign(n,-1); // Vector con n casillas llenadas de -1
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    //ORDENAR DE MAYOR A MENOR
    sort(u.rbegin(),u.rend());
    for(auto x: u){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}