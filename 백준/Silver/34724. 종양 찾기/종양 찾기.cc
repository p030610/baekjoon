#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans;
int arr[1005][1005];
pair<int,int> dir[4];
int main(){
    dir[0]={0,1};
    dir[1]={1,0};
    dir[2]={1,1};
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(arr[i][j]==1){
                int cnt=1;
                for(int k=0; k<3; k++){
                    int nextx=i+dir[k].first;
                    int nexty=j+dir[k].second;
                    if(0<=nextx&&nextx<a&&0<=nexty&&nexty<b){
                        if(arr[nextx][nexty]==1){
                            cnt++;
                        }
                    }
                }
                if(cnt>=4){
                    ans=max(ans,1);
                }
            }
        }
    }
    printf("%d",ans);
    
    return 0;
}
