#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int n;
    lli i, j, ans;
    scanf("%d",&n);
    scanf("%lld",&i);
    n--;
    ans = 0LL;
    while (n--)
    {
        scanf("%lld", &j);
        ans += (i>j)?i-j:0;
        i = max(i,j);
    }
    printf("%lld\n",ans);
    
    return 0;
}