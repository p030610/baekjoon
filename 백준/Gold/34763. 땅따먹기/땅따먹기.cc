#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        ll n,k;
        scanf("%lld %lld",&n,&k);
        
        bool ans=false;
        double val1,val2;
        val1=0;
        val2=0;
        
        //근의공식
        if(n>k){
            ans=false;
        }
        else{
            if(((n+(ll)1)*(n+(ll)1)-(ll)4*k)<(ll)0){
                ans=false;
            }
            else{
                val1=(double)(n+(double)1+sqrt((n+(double)1)*(n+(double)1)-(double)4*k))/2.0;
                val2=(double)(n+(double)1-sqrt((n+(double)1)*(n+(double)1)-(double)4*k))/2.0;
                
                if(ceil(val1)==floor(val1)&&1<=val1&&val1<=k){
                    if(k%(ll)val1==0&&1<=k/(ll)val1&&k/(ll)val1<=(n+1)-val1){
                        ans=true;
                    }
                }
                if(ceil(val2)==floor(val2)&&1<=val2&&val2<=k){
                    if(k%(ll)val2==0&&1<=k/(ll)val2&&k/(ll)val2<=(n+1)-val2){
                        ans=true;
                    }
                }
            }
            
        }
        if(ans){
//                printf("%d %d\n",(int)val1, (int)val2);
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    return 0;
}

//1
//100000009 1000000000

