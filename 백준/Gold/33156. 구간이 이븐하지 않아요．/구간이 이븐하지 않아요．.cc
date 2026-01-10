#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int arr[10000];
map<int,int> trans;
set<int> s;
int m1[10000];
int m2[10000];
int ans;

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        s.insert(arr[i]);
    }
    int idx=1;
    
    for(auto i:s){
        trans[i]=idx;
        idx++;
    }
    for(int i=0; i<n; i++){
        arr[i]=trans[arr[i]];
    }
    
    for(int i=1; i<n; i++){
        //i, i-1 양쪽에서 옆으로 뻗어 나가기
        int l=i-1;
        int r=i;
        int len=2;
        for(int i=0; i<6000; i++){
            m1[i]=0;
            m2[i]=0;
        }
        int cnt=0;
        
        if(arr[l]!=arr[r]){
            cnt=2;
            m1[arr[l]]++;
            m2[arr[r]]++;
        }
        
        if(cnt==0){
            ans=max(ans,len);
        }
        while(l>0&&r<n-1){
            l--;
            r++;
            len+=2;
            
            if(arr[l]!=arr[r]){
                cnt-=abs(m1[arr[l]]-m2[arr[l]]);
                cnt-=abs(m1[arr[r]]-m2[arr[r]]);
                
                m1[arr[l]]++;
                m2[arr[r]]++;
                
                cnt+=abs(m1[arr[l]]-m2[arr[l]]);
                cnt+=abs(m1[arr[r]]-m2[arr[r]]);
                
            }
            
            if(cnt==0){
                ans=max(ans,len);
            }
        }
    }
    printf("%d",ans);
    
    return 0;
}
