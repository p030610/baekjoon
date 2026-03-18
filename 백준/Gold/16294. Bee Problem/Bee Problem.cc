#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;
int arr[4000][4000];
int visited[5000][5000];
pair<int,int> direction[6];
deque<int> d;
int row,col,honey;

void bfs(int x, int y){
    int cnt=0;

    queue<pair<int,int>> q;
    q.push({x,y});
    while(q.size()>0){
        pair<int,int> current=q.front();
        q.pop();
        if(visited[current.first][current.second]==1){
            continue;
        }
        cnt++;
        visited[current.first][current.second]=1;
        for(int i=0; i<6; i++){
            int nextx=current.first+direction[i].first;
            int nexty=current.second+direction[i].second;
            if(0<=nextx&&nextx<row*2&&0<=nexty&&nexty<col*2){
                if(visited[nextx][nexty]==0&&arr[nextx][nexty]==1){
                    q.push({nextx,nexty});
                }
            }
        }
    }
    if(cnt!=0){
        d.push_back(cnt);
    }
}

int main(){
    direction[0]={1,1};
    direction[1]={-1,-1};
    direction[2]={1,-1};
    direction[3]={-1,1};
    direction[4]={0,2};
    direction[5]={0,-2};
    
    
    cin>>honey>>row>>col;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    int idx=0;
    string s;
    for(int i=0; i<row; i++){
        getline(cin, s);
        if(i%2==0){
            idx=0;
        }
        else{
            idx=1;
        }
        
        for(int j=0; j<s.size(); j++){
            if(s[j]=='.'){
                arr[i][idx]=1;
                idx+=2;
            }
            else if(s[j]=='#'){
                visited[i][idx]=1;
                arr[i][idx]=2;
                idx+=2;
            }
        }
    }
    for(int i=0; i<row*2; i++){
        for(int j=0; j<col*2; j++){
            if(visited[i][j]==0&&arr[i][j]==1){
                bfs(i,j);
            }
        }
    }
    sort(d.rbegin(),d.rend());
    int ans=0;
    int val=0;
    while(d.size()>0&&val<honey){
        val+=d.front();
        d.pop_front();
        ans++;
    }
    cout<<ans;
    
    return 0;
}
