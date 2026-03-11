#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int ansval;
bool func(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    else{
        return a.second<b.second;
    }
}
int main(){
    int n,d;
    vector<pair<ll,ll>> v1,v;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        a+=1000000000;
        b+=1000000000;
        v.push_back({min(a,b),max(a,b)});
    }
    scanf("%d",&d);
    for(int i=0; i<v.size(); i++){
        if(v[i].second-v[i].first<=d){
            v1.push_back(v[i]);
        }
    }
    sort(v1.begin(),v1.end(),func);
    priority_queue<ll> pq;
    for(int i=0; i<v1.size(); i++){
        
        pq.push(-v1[i].first);
        
        while(pq.size()&&(v1[i].second-(-pq.top()))>d){
            pq.pop();
        }
        ansval=max(ansval,(int)pq.size());
    }
    printf("%d",ansval);
    return 0;
}
