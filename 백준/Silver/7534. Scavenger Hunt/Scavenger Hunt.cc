#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;


map<string,string> m;
map<string,int> m2;
set<string> s;

void bfs(string asdf){
    cout<<asdf<<"\n";
    if(m[asdf]!=""){
        bfs(m[asdf]);
    }
}

int main(){
    int idx=1;
    int c;
    scanf("%d",&c);
    string st;
    string a,b;
    while(c--){
        printf("Scenario #%d:\n",idx);
        m.clear();
        m2.clear();
        s.clear();
        int n;
        scanf("%d",&n);
        for(int i=1; i<n; i++){
            cin>>a>>b;
            m[a]=b;
            m2[b]=1;
            s.insert(a);
            s.insert(b);
        }
        for(auto i:s){
            if(m2[i]==0){
                st=i;
                break;
            }
        }
        bfs(st);
        cout<<"\n";
        
        
        idx++;
        
    }
    
    return 0;
}
