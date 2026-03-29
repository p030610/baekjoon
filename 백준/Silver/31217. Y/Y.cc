#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;
ll ans;
ll dv=1000000000+7;
vector<int> adj[200000];
int visited[200000];

void dfs(int start){
    if(visited[start]==1){
        return;
    }
    visited[start]=1;
    
    if(adj[start].size()>=3){
        ll sz=adj[start].size();
        ans=ans+(sz)*(sz-(ll)1)*(sz-(ll)2)/(ll)6;
        ans%=dv;
    }
    
    for(int i=0; i<adj[start].size(); i++){
        dfs(adj[start][i]);
    }
    
}
int main(){
    int n,m,u,v;
    scanf("%d %d",&n,&m);
    for(int i=0; i<m; i++){
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    
    for(int i=1; i<=n; i++){
        dfs(i);
    }
    cout<<ans%dv;
    
    
    return 0;
}
