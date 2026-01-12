#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

deque<pair<int,int>> d;
deque<int> lis;

int main() {
    
    int n,a;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        d.push_back({i,a});
    }
    sort(d.begin(),d.end());
    
    
    for(int i=0; i<d.size(); i++){
        if(lis.size()==0){
            lis.push_back(d[i].second);
        }
        else{
            auto it=lower_bound(lis.begin(), lis.end(), d[i].second);
            if(it==lis.end()){
                lis.push_back(d[i].second);
            }
            else{
//                printf("%d\n",(int)(it-lis.begin()));
                if(*it!=d[i].second){
                    lis[it-lis.begin()]=d[i].second;
                }
            }
        }
    }
    printf("%d",(int)lis.size());
    
    
    return 0;
}
