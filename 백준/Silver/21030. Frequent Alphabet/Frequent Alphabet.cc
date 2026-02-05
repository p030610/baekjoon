#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
deque<pair<int,int>> d;

map<char,int> m;
int main() {
    int n;
    string s,t;
    cin>>n;
    cin>>s>>t;
    int ans=0;
    
    for(int i=0; i<n; i++){
        if(s[i]==t[i]){
            m[s[i]]++;
        }
        else{
            m[s[i]]++;
            m[t[i]]++;
        }
    }
    for(auto i:m){
        ans=max(ans,i.second);
    }
    
    printf("%d",ans);
    
    
    return 0;
}
