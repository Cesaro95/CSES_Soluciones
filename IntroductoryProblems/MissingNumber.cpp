#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll sum, n, xi;
    scanf("%lld", &n);
    sum = (n*(n+1LL))/2LL;
    while(n!=1){
        scanf("%lld", &xi);
        sum -= xi;
        n--;
    }
    printf("%lld\n",sum);
    return 0;
}