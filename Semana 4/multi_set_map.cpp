#include <iostream>
#include <map>
#include <set>
#include <cstdio>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(5);
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    ms.insert(4);
    ms.insert(5);

    for(auto elemento: ms){
        printf("%d ",elemento);
    }
    printf("\nEl elemento 4 se repite %d veces\n",ms.count(4));

    multimap<string,int> mm;
    mm.insert(make_pair("enero",31));
    mm.insert(make_pair("febrero",28));
    mm.insert(make_pair("febrero",21));

    for(auto elem: mm){
        printf("[ %s ]->%d\n",elem.first.c_str(),elem.second);
    }
    return 0;
}