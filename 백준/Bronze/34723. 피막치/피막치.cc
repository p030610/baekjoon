#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans;
int main(){
    ans=2087654321;
    int p,m,c,x;
    scanf("%d %d %d %d",&p,&m,&c,&x);
    for(int i=1; i<=p; i++){
        for(int j=1; j<=m; j++){
            for(int k=1; k<=c; k++){
                ans=min(ans,abs((i+j)*(j+k)-x));
            }
        }
    }
    printf("%d",ans);
    return 0;
}
