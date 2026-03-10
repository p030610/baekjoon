#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

unordered_map<ll, pair<ll,ll>> m;
ll ans;
ll n;

int main(){
    scanf("%lld",&n);
//    m[1]={n,n};
    ll prev=n;
    
    for(int i=1; i<=min(n,(ll)1000); i++){
        ll val=1;
        ll l=1;
        ll r=n;
        bool flag=false;
        
        while(l<=r){
            ll mid=(l+r)/2;
            if((n-1)/mid+1>i){
                l=mid+1;
            }
            else{
                if((n-1)/mid+1==i){
                    val=mid;
                    flag=true;
                }
                r=mid-1;
            }
        }
        if(flag){
            m[i]={val,prev};
            prev=val-1;
        }
        
    }
    for(auto i:m){
        ans+=(i.second.second-i.second.first+1)*i.first;
    }
    
    
    for(ll i=1; i<=prev; i++){
        ans+=(n-1)/i+1;
    }
    
    printf("%lld",ans);
    return 0;
}
