#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

deque<int> adj[1005];
int origin[1005];
int history[1005];
int ans;

bool try_match(int start){
    for(int i=0; i<adj[start].size(); i++){
        if(history[adj[start][i]]){
            continue;
        }
        history[adj[start][i]]=1;
        if(origin[adj[start][i]]==-1 || try_match(origin[adj[start][i]])){
            origin[adj[start][i]]=start;
            
            return true;
        }
    }
    
    return false;
}

int main(){
    for(int i=0; i<1005; i++){
        origin[i]=-1;
    }
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1; i<=n; i++){
        int a,b;
        scanf("%d",&a);
        for(int j=1; j<=a; j++){
            scanf("%d",&b);
            adj[i].push_back(b);
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            history[j]=0;
        }
        if(try_match(i)){
            ans++;
        }
        
    }
    printf("%d",ans);
    return 0;
}
