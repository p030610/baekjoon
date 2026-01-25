#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int weight[40][100000];
deque<int> choo;
int offset=40000;

void dfs(int idx, int w){
    if(weight[idx][w]!=0){
        return;
    }
    weight[idx][w]=1;

    for(int i=idx+1; i<choo.size(); i++){
        dfs(i,w+choo[i]);
        dfs(i,w-choo[i]);
    }
}

int main() {
    int n,m,a;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        choo.push_back(a);
    }
    sort(choo.begin(),choo.end());

    for(int i=0; i<choo.size(); i++){
        dfs(i,choo[i]+offset);
    }

    scanf("%d",&m);

    for(int i=0; i<m; i++){
        scanf("%d",&a);
        bool flag=false;
        for(int j=0; j<choo.size(); j++){
            if(weight[j][a+offset]==1||weight[j][offset-a]==1){
                flag=true;
            }
        }
        if(flag){
            printf("Y ");
        }
        else{
            printf("N ");
        }
    }
    return 0;
}