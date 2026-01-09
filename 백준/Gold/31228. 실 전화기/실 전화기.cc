#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
    ll n,k;
    scanf("%lld %lld",&n,&k);
    k=min(n-k,k);
    
    ll b_n,b_k;
    b_n=n/gcd(n,k);
    b_k=k/gcd(n,k);
    n=b_n;
    k=b_k;
    
    
//    printf("%lld",(ll)(lcm(n,k)-n));
    
//    if(gcd(n,n-k)!=1||gcd(n,k)!=1||k==1||n-k==1){
//        printf("0");
//    }
//    else{
//    printf("%d",(int)lcm(n,k));
    printf("%lld",((ll)lcm(n,k)-n));
//    }
    
    return 0;
}
