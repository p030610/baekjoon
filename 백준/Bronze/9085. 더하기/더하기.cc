#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        int sum=0;
        scanf("%d",&a);
        for(int i=0; i<a; i++){
            int b;
            scanf("%d",&b);
            sum+=b;
        }
        printf("%d\n",sum);
        
    }
    return 0;
}
