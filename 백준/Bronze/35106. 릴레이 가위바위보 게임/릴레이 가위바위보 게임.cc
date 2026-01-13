#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
ll ans;

ll nCk(ll n, ll k) {
    if (k > n) return 0;
    k = min(k, n - k);
    ll res = 1;
    for (ll i = 1; i <= k; i++) {
        res = res * (n - k + i) / i;  // 항상 정수로 나눠떨어짐
        if (res > numeric_limits<ll>::max()) {
            // overflow 감지용 (필요하면 예외 처리)
        }
    }
    return (ll)res;
}

int main() {

//    int tt;
//    scanf("%d",&tt);
//    while(tt--){
//        int n,k;
//        scanf("%d %d",&n,&k);
//        int n_bak=n;
//        ll ans=0;
//        int idx=1;
//        int num=1;
//        
//        n/=2;
//        
//        while(num<n){
//            num*=2;
//            idx++;
//        }
//        
//        if(idx+1<=k){
//            ans++;
//        }
//        
//        while(n>0){
//            //iterate per most significant bit
//            
//            
//            for(int i=0; i<=idx-1; i++){
//                if(idx+i>k){
//                    break;
//                }
//                //compute (idx-1)C(i), and add to ans
//                if(idx==1){
//                    ans+=1;
//                }
//                else{
//                    ans+=nCk(idx-1, i);
//                }
//            }
//            
//            n/=2;
//            idx--;
//        }
//        printf("%lld\n",n_bak-ans);
//    }
    
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a=0;
    b=0;
    c=0;
    
    for(int i=0; i<3*n; i++){
        scanf("%d",&d);
        if(d==1){
            a++;
        }
        else if(d==2){
            b++;
        }
        else{
            c++;
        }
    }
    int ans1,ans2;
    if(a>n){
        ans2=1;
        if(b<n){
            ans1=2;
            
        }
        else{
            ans1=3;
            
        }
    }
    else if(b>n){
        ans2=2;
        if(a<n){
            ans1=1;
        }
        else{
            ans1=3;
        }
    }
    else{
        ans2=3;
        if(a<n){
            ans1=1;
        }
        else{
            ans1=2;
        }
    }
    printf("%d\n%d",ans1,ans2);
    
    return 0;
}
