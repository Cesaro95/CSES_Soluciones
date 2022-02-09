#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;
    lli x,y,vc,my,ans;

    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld", &x, &y);
        my = max(x,y);
        vc = my*my;
        if(my&1)
            ans = vc - (x-1) - (my-y);
        else
            ans = vc - (y-1) - (my-x);
        printf("%lld\n",ans);
    }
    return 0;
}