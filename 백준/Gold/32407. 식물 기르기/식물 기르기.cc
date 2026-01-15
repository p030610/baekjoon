#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

deque<int> d;

int main() {
    map<int,int> m;
    int n;
    int a;
    ll ans=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        d.push_back(a);
        m[a]++;
    }
    
    ll margin=0;
    for(int i=0; i<=20; i++){
        int val=1<<i;
        margin*=2;
        
        margin=margin+=m[val];
        ans+=margin/val;
        margin=margin%val;
    }
    if(margin!=0){
        ans++;
    }
    
    printf("%lld",ans);
    
    return 0;
}
