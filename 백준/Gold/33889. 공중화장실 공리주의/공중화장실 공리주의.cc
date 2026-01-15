#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans;
ll dp[2000][2000];

ll dv=1'000'000'007;

ll nCr(ll n, ll r){
    if(n<r){
        return 0;
    }
    if(n<0||r<0){
        return 0;
    }
    ll val=1;
    for(ll i=1; i<=r; i++){
        val=val*(n-r+i)/i;
        val=val%dv;
    }
    return val%dv;
}

ll func(int m, int g){
    if(g==0){
        return 0;
    }
    
    if(dp[m][g]!=0){
        return dp[m][g];
    }
    if(g>m){
        for(int i=0; i<=1; i++){
            
            dp[m][g]+=func(m-i,g-1);
            dp[m][g]%=dv;
        }
    }
    else{
        for(int i=1; i<=m-g+1; i++){
            if(m-i==0){
                break;
            }
            
            dp[m][g]+=func(m-i,g-1);
            dp[m][g]%=dv;
        }
    }
    return dp[m][g]%dv;
}

int main() {
    
    
    for(int i=1; i<=1100; i++){
        for(int j=1; j<=1100; j++){
            dp[i][j]=0;
        }
        dp[0][i]=1;
        dp[i][1]=1;
        dp[i][i]=1;
    }
    
    int n,m;
    scanf("%d %d",&n,&m);
    
//    int group=min(m,(n-m)+1);
    
    ans=func(m,n-m+1);
    
    printf("%lld",ans%dv);
    
    return 0;
}
