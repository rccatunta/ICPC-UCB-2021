// Solution Army Buddies
// Author: Rodolfo Catunta
#include <iostream>
#include <cstdio> // scanf, printf in C++ 
#include <vector>
using namespace std;
int main(){
    int S,B;
    while(scanf("%d %d",&S,&B) && (S != 0 or B != 0 )){
        int L,R;
        vector<int>left_buddy(S+1);
        vector<int>right_buddy(S+1);
        for(int i=1;i<=S;i++){
            left_buddy[i]=i-1;
            right_buddy[i]=i+1;
        } 
        left_buddy[1] = 0; // The first buddy don't have left buddy
        right_buddy[S] = 0; // The last buddy don't have right buddy
        for(int i=0;i<B;i++){
            scanf("%d %d",&L,&R);
            // When range [L,R] is deleted then left_buddy of the R right_buddy is now l left_buddy
            left_buddy[right_buddy[R]]=left_buddy[L];
            // When range [L,R] is deleted then right_buddy of the L left_buddy is now R right_buddy
            right_buddy[left_buddy[L]]=right_buddy[R];
            int resL = left_buddy[L];
            int resR = right_buddy[R];
            if(resL==0) printf("*");
            else printf("%d",resL);
            if(resR==0) printf(" *\n");
            else printf(" %d\n",resR);
        }
        printf("-\n");
    }
    return 0;
}