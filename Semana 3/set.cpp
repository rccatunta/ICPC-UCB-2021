#include <iostream>
#include <set> // Para usar conjuntos

using namespace std;

int main(){
    set<int> conj;
    int N,x;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        conj.insert(x);
    }
    cout<<conj.size()<<endl;
    cout<<"CONTENIDO DEL CONJUNTO"<<endl;
    // C++ Normal
    set<int>::iterator it;
    for(it=conj.begin();it!=conj.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // C++ 11
    for(auto elem: conj){
        cout<<elem<<" ";
    }
    return 0;
}