#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    scanf("%lld",&n);
    while(n!=1){
        printf("%lld ",n);
        if(n&1)
            n =(n*3) + 1;
        else
            n /=2;
    }
    printf("%d\n",1);
    return 0;
}