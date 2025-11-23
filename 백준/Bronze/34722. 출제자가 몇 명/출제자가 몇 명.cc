#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int si,ci,ai,ri;
        scanf("%d %d %d %d",&si,&ci,&ai,&ri);
        if(ri==-1){
            ri=1000;
        }
        if(si>=1000||ci>=1600||ai>=1500||ri<=30){
            ans++;
            
        }
        
    }
    printf("%d",ans);
    return 0;
}
