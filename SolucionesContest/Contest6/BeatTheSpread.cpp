#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int s,d;
        scanf("%d %d",&s,&d);
        if((s+d)%2==1 or (s-d)&2==1 or s<d){
            printf("impossible\n");
        }
        else{
            int a = (s+d)/2;
            int b = (s-d)/2;
            printf("%d %d\n",a,b);
        }
    }
    return 0;
}