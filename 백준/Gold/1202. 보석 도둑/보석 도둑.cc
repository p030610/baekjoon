#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
deque<pair<int,int>> gem;
deque<int> bag;
ll ans;

bool func(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    else{
        return a.first>b.first;
    }
}

int main(){
    int n,k,m,v,c;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d %d",&m,&v);
        gem.push_back({v,m});
    }
    for(int i=0; i<k; i++){
        scanf("%d",&c);
        bag.push_back(c);
    }
    sort(bag.begin(),bag.end());
    
    sort(gem.begin(),gem.end(),func);
    
    for(int i=0; i<gem.size(); i++){
        int idx=-1;
        int l=0;
        int r=(int)bag.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(bag[mid]>=gem[i].second){
                idx=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(idx!=-1){
            bag.erase(bag.begin()+idx);
            ans+=gem[i].first;
        }
    }
    
    printf("%lld",ans);
    
    return 0;
}
