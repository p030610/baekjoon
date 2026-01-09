//#include <bits/stdc++.h>
//using namespace std;
//typedef unsigned long long ull;
//typedef long long ll;
//
//int arr[6000];
//map<int,int> coord;
//set<int> s;
//
//int f[6000];
//int b[6000];
//bool dp[6000][6000];
//int ans;
//
//int main() {
//    int n;
//    scanf("%d",&n);
//    for(int i=0; i<n; i++){
//        scanf("%d",&arr[i]);
//        s.insert(arr[i]);
//    }
//    
//    int idx=1;
//    for(auto i:s){
//        coord[i]=idx;
//        idx++;
//    }
//    
//    for(int i=0; i<n; i++){
//        arr[i]=coord[arr[i]];
//    }
//    
//    int sz=1;
//    bool flag=true;
//    
//    while(sz*2<=n){
//        for(int i=0; i<=5000; i++){
//            f[i]=0;
//            b[i]=0;
//        }
//        
//        flag=true;
//        for(int i=0; i<sz; i++){
//            f[arr[i]]++;
//        }
//        for(int i=sz; i<sz*2; i++){
//            b[arr[i]]++;
//        }
//        //검사
//        for(int i=0; i<sz*2; i++){
//            if(f[arr[i]]!=b[arr[i]]){
//                flag=false;
//                break;
//            }
//        }
//        if(flag){
//            ans=max(ans,sz*2);
//        }
//        
//        if(sz==1){
//            for(int i=1; i<n; i++){
//                if(arr[i]==arr[i-1]){
//                    dp[i-1][i]=true;
//                    ans=2;
//                }
//            }
//        }
//        else{
//            for(int i=0; i<n-sz*2; i++){
//                
//                flag=true;
//                f[arr[i]]--;
//                f[arr[i+sz]]++;
//                b[arr[i+sz]]--;
//                b[arr[i+sz*2]]++;
//                
//                //검사
//                if(b[arr[i+2*sz]]!=f[arr[i+2*sz]]||b[arr[i+sz]]!=f[arr[i+sz]]){
//                    flag=false;
//                }
//                if(b[arr[i]]!=f[arr[i]]){
//                    flag=false;
//                }
//                
//                if(flag){
//                    ans=max(ans,sz*2);
//                }
//            }
//        }
//        
//        
//        sz++;
//    }
//    printf("0");
//    
//    return 0;
//}
//
////5
////1 2 3 4 3


#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
    
    ll n,r;
    scanf("%lld %lld",&n,&r);
    
    ll ans=0;
    ans+=(n+1);
    r--;
    
    ans+=(r*(2));
    
    printf("%lld",ans);
    return 0;
}


