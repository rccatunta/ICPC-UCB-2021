#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;
    int N;
    string palabra;
    cin>>N;
    while(N--){
        cin>>palabra;
        m[palabra]++; // Cuenta frecuencias de palabras
    }
    int freq_max = -1;
    string pal_mas_repetida;
    for(auto elem: m){
        cout<<elem.first<<" se repite "<<elem.second<<" veces"<<endl;
        if(elem.second>=freq_max){
            freq_max = elem.second;
            pal_mas_repetida = elem.first;
        }
    }
    cout<<"La palabra mas repetida es "<<pal_mas_repetida<<endl;
}