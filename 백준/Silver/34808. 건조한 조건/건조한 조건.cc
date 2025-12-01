#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    
    if(n==1&&m==1&&k==0){
        printf("1");
    }
    else if(n==1&&m==2&&k==0){
        printf("1 1");
    }
    else if(n==2&&m==1&&k==0){
        printf("1\n1");
    }
    else if(k==0){
        printf("-1");
    }
    else{
        if(n==1||m==1){
            if(n==1){
                ll a=k;
                ll b=0;
                
                for(int i=0; i<m; i++){
                    printf("%lld ",b);
                    b+=a;
                }
            }
            else{
                //m==1
                ll a=k;
                ll b=0;
                
                for(int i=0; i<n; i++){
                    printf("%lld\n",b);
                    b+=a;
                }
            }
        }
        else{
            printf("-1");
        }
    }
    
    return 0;
}
