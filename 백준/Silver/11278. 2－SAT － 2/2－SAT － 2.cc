#include <bits/stdc++.h>
using namespace std;
vector<int> adj[30005];//인접행렬
stack<int> s;//ssc 저장 스택
int id[30005];//노드별 라벨
bool finished[30005];//노드별 ssc처리 여부
int true_false[30005];
int n,m,a,b;
vector<int> scc_set;
vector<vector<int>> ans;
int vertexCounter;

int tarjan(int now){
    int parent = id[now] = ++vertexCounter;
    //parent : scc중 가장 처음 방문한 노드의 라벨 번호로 바뀜.
    //초기에는 라벨 번호를 대입(루트가 자기 자신이라고 처음엔 가정) scc로 결정될 사이클을 발견했을 때,
    //parent가 scc중 가장 처음 방문한 노드의 라벨 번호로 바뀜.
    s.push(now);
    
    for(int i = 0; i < adj[now].size(); i++){
        int next = adj[now][i];
        
        if(id[next] == -1){
            parent = min(parent, tarjan(next));
        }
        else if(finished[next]==false){//방문은 했었으나 scc처리가 안된 노드:사이클
            parent = min(parent, id[next]);
        }
    }
    
    if(parent == id[now]){//사이클 감지, 스택에 원소들 싹다 scc로 넣기
        scc_set.clear();
        while(true){
            int temp = s.top();
            s.pop();
            scc_set.push_back(temp);
            finished[temp] = true;
            if(temp == now) break;
        }
        sort(scc_set.begin(), scc_set.end());
        ans.push_back(scc_set);
    }
    return parent;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i<30005; i++){
        true_false[i]=-1;
    }
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        a+=10000;
        b+=10000;
        
        adj[(-1)*(a-10000)+10000].push_back(b);
        adj[(-1)*(b-10000)+10000].push_back(a);
    }
    for(int i=(-n+10000); i<=9999; i++){
        id[i]=-1;
        finished[i]=false;
    }
    for(int i=10001; i<=n+10000; i++){
        id[i]=-1;
        finished[i]=false;
    }
    for(int i=(-n+10000); i<=9999; i++){
        if(id[i]==-1){
            tarjan(i);
        }
    }
    for(int i=10001; i<=n+10000; i++){
        if(id[i]==-1){
            tarjan(i);
        }
    }
    //어떤 변수와 not형 변수가 한 scc에 존재하면 참으로 만들 수 있는 경우가 없음
    int val=1;
    for(int i=0; i<ans.size(); i++){
        if(val==0){
            break;
        }
        else{
            for(int j=0; j<ans[i].size(); j++){
                if(find(ans[i].begin(), ans[i].end(), (-1)*(ans[i][j]-10000)+10000)!=ans[i].end()){
                    val=0;
                    break;
                }
            }
        }
    }
    cout<<val<<"\n";
    if(val==1){
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                if(true_false[ans[i][j]]==-1){
                    true_false[ans[i][j]]=1;
                    true_false[(-1)*(ans[i][j]-10000)+10000]=0;
                }
            }
        }
        
        for(int i=10001; i<=n+10000; i++){
            cout<<true_false[i] << " ";
        }
    }
    
    return 0;
}
