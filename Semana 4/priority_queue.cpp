#include <iostream>
#include <queue>
using namespace std;

int main(){
    // priority_queue<int> pq Para colas de mayor a menor
    vector<int> v;
    priority_queue< int, vector<int>, greater<int> >pq; // Para colas de menor a mayor
    pq.push(5);
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(4);
    printf("El tamanio de la cola de prioridad es %d\n",pq.size());
    // Recorrer una cola
    while(!pq.empty()){
        printf("%d ",pq.top());
        pq.pop();
    }
    return 0;
}