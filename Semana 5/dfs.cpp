#include <bits/stdc++.h> // Libreria que pone todas las librerias

using namespace std;

int nodos,aristas;
int adj_mat[1000][1000]; // Max number of nodes
vector< vector<int> >G;
vector<bool>visitados;
// DEPTH FIRST SEARCH
void dfs(int nodo){
    visitados[nodo]=true;
    for(int i=0;i<G[nodo].size();i++){ // Visit the adjacent nodes of node "nodo"
        int por_visi = G[nodo][i];
        if(!visitados[por_visi]){
            dfs(por_visi);
        }
    }
}

int main(){
    scanf("%d %d",&nodos,&aristas);
    G.assign(nodos,vector<int>());
    visitados.assign(nodos,false);
    for(int i=0;i<aristas;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    dfs(0);
    for(int i=0;i<visitados.size();i++){
        if(visitados[i]){
            printf("Hay un camino de 0 a %d\n",i);
        }
        else{
            printf("No hay un camino de 0 aa %d\n",i);
        }
    }
    return 0;
}