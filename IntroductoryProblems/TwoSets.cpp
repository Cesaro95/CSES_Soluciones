#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    scanf("%lld",&n);
    ll sum = (n*(n+1))/2;
    if(sum&1){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        set<ll>s1,s2;
        ll target = sum/2;
        int t = n;
        for(int i=1; i<=n; i++)
            s1.insert(i);
        while(s1.count(target)==0){
            target-=t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }
        s2.insert(target);
        s1.erase(target);
        printf("%d\n",s1.size());
        for(ll it:s1){
            printf("%lld ",it);
        }
        printf("\n%d\n",s2.size());
        for(ll it:s2){
            printf("%lld ",it);
        }
    }
    return 0;
}