#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>

using namespace std;

int main(){
    unordered_set<int> us;
    us.insert(5);
    us.insert(1);
    us.insert(14);
    us.insert(1);
    us.insert(23);
    
    for(auto elem: us){
        printf("%d ",elem);
    }

    unordered_map <string,int> um;
    um["enero"]=31;
    um["abril"]=30;
    um["junio"]=30;
    um["febrero"]=28;
    for(auto elem: um){
        printf("[%s] -> %d ",elem.first.c_str(),elem.second);
    }

    return 0;
}