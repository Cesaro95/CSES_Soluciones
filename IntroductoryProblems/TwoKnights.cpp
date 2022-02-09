#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, k, total_combinaciones, ataque_caballos;
    scanf("%lld",&n);
    for (k = 1LL; k <= n; k++)
    {
        total_combinaciones = ((k*k)*(k*k-1LL))/2LL;
        ataque_caballos = 4LL*(k-1LL)*(k-2LL);
        printf("%lld\n",total_combinaciones-ataque_caballos);
    }
    
    return 0;
}