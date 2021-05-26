#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;

    // Añadir un elemento a la cola
    q.push(5);
    q.push(7);
    q.push(11);
    q.push(-4);
    q.push(0);

    // Sacar de la cola
    int frente =  q.front();
    cout<<frente<<endl;
    q.pop();

    // Recorrer una cola
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}