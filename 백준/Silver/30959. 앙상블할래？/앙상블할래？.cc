#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;
vector<int> v[200];
vector<int> ans;
deque<pair<int,vector<int>>> d;
int gt_ans;
vector<int> path;
int n,m,a;
int poscnt[200];
int negcnt[200];
int ansval;

void dfs(int start){
    
    path.push_back(start);
    int val=0;
    for(int j=0; j<m; j++){
        if(d[start].second[j]==1){
            poscnt[j]++;
        }
        else{
            negcnt[j]++;
        }
    }
    if(ansval!=0){
        return;
    }
    if(path.size()%2==1){
        int cnt=0;
        int sig=0;
        for(int j=0; j<m; j++){
            if(poscnt[j]>negcnt[j]){
                sig=1;
            }
            else{
                sig=0;
            }
            if(ans[j]==sig){
                cnt++;
            }
        }
        if(cnt>gt_ans){
            ansval=1;
            return;
        }
    }
    
    for(int i=start+1; i<n; i++){
        dfs(i);
        for(int j=0; j<m; j++){
            if(d[i].second[j]==1){
                poscnt[j]--;
            }
            else{
                negcnt[j]--;
            }
        }
        path.pop_back();
        
    }
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a;
        ans.push_back(a);
    }
    
    for(int i=0; i<n; i++){
        int cnt=0;
        
        for(int j=0;j<m; j++){
            cin>>a;
            v[i].push_back(a);
            if(ans[j]==v[i][j]){
                cnt++;
            }
        }
        d.push_back({cnt,v[i]});
        gt_ans=max(gt_ans,cnt);
    }
    for(int i=0; i<n; i++){
        dfs(i);
        for(int j=0; j<m; j++){
            if(d[i].second[j]==1){
                poscnt[j]--;
            }
            else{
                negcnt[j]--;
            }
        }
        path.pop_back();
        
    }
    cout<<ansval;
    
    return 0;
}
