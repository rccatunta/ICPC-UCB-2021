#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>p;

    // Añadir un elemento a la pila
    p.push(5);
    p.push(7);
    p.push(11);
    p.push(-4);
    p.push(0);

    // Sacar de la cola
    int frente =  p.top();
    cout<<frente<<endl;
    p.pop();

    // Recorrer una pila
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
    return 0;
}