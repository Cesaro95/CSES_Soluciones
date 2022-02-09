#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[1000001];
    scanf("%[^\n]",&s);
    int i=1;
    int cont = 1;
    int my = 1;
    while(s[i]!='\0'){
        if(s[i-1] == s[i]){
            cont++;
        }
        else{
            my = max(my,cont);
            cont = 1;
        }
        i++;
    }
    my = max(my,cont);
    printf("%d\n", my);
        
    return 0;
}