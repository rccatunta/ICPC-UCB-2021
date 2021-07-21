#include <bits/stdc++.h> // Libreria que pone todas las librerias

using namespace std;

int nodos,aristas;
int adj_mat[1000][1000]; // Max number of nodes
vector< vector<int> >G;

int main(){
    // Adjacency Matrix
    scanf("%d %d",&nodos,&aristas);
    memset(adj_mat,0,sizeof adj_mat); // Fill all the matrix with 0s
    for(int i=0;i<aristas;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        // Not directed
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
        // Directed
        // adj_mat[a][b]=1;
        // Weighted 
        // adj_mat[a][b]=peso;
        // Fill the matrix with "+inf" 
    }
    for(int i=0;i<nodos;i++){
        for(int j=0;j<nodos;j++){
            printf("%d ",adj_mat[i][j]);
        }
        printf("\n");
    }

    // Adjacency List
    scanf("%d %d",&nodos,&aristas);
    G.assign(nodos,vector<int>());
    for(int i=0;i<aristas;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        // Not directed
        G[a].push_back(b);
        G[b].push_back(a);
        // Directed
        // G[a].push_back(b);
        // Weighted 
        // vector< vector< pair<int,int> >
        // G[a].push_back(make_pair(b,peso);)
    }
    for(int i=0;i<G.size();i++){
        printf("Nodo %d:",i);
        for(int j=0;j<G[i].size();j++){
            printf(" %d",G[i][j]);
        }
        printf("\n");
    }
    return 0;
}