#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int>d;
    // La unica diferencia es que se puede colacar y quitar elementos del principio
    d.push_back(7);
    d.push_front(5);
    d.push_front(1);
    d.push_back(10);

    for(auto elem: d){
        cout<<elem<<" ";
    }
    cout<<endl;
    return 0;
}