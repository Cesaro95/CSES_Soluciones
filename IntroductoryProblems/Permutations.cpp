#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>vec;
    int i=1,j=2;
    scanf("%d",&n);
    while(j<=n){
        vec.push_back(j);
        j+=2;
    }
    while(i<=n){
        vec.push_back(i);
        i+=2;
    }
    if(n<=3 && n!=1){
        printf("NO SOLUTION\n");
    }else if(n==1){
        printf("1\n");
    }else{
        int lmt = vec.size()-1;
        for(int pos = 0; pos<lmt; pos++){
            printf("%d ",vec[pos]);
        }
        printf("%d\n",vec[lmt]);
    }
    return 0;
}