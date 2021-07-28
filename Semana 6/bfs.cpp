#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef vector<int> vi;

vector<vi> G;
vi distancia;
vi padre;

void bfs(int nodo){
    queue<int> q;
    distancia[nodo]=0;
    padre[nodo]=nodo;
    q.push(nodo);
    while(!q.empty()){
        int nodo_front = q.front();
        q.pop();
        for(auto vecino: G[nodo_front]){
            if(distancia[vecino]==-1){ // If the node isn't already visited
                // Visit the node
                q.push(vecino); // Put the node in queue
                padre[vecino] = nodo_front; 
                distancia[vecino] = distancia[nodo_front]+1;    
            }
        }
    }
}

int main(){
    double num;
    scanf("%lf",&num);
    printf("%.12f\n",num);
    int nodos,arcos;
    scanf("%d %d",&nodos,&arcos);
    G.assign(nodos,vi());
    distancia.assign(nodos,-1);
    padre.assign(nodos,-1);
    // Input edges
    for(int i=0;i<arcos;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bfs(0);
    for(auto x:distancia){
        printf("%d ",x);
    }
    printf("\n");
    for(auto x:padre){
        printf("%d ",x);
    }
    printf("\n");
    return 0;
}