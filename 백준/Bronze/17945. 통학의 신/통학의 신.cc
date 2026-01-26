#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[20];

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a*2;
    set<int> s;
    s.insert((-a+(int)sqrt(a*a-4*b))/2);
    s.insert((-a-(int)sqrt(a*a-4*b))/2);
    
    
    for(auto i:s){
        printf("%d ",i);
    }
    

    return 0;
}
