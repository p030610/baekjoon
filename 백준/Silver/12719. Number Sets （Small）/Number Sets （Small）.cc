#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

int arr[2000];
deque<int> primes;
set<int> s;

int roots[5003];

int find(int a){//루트 반환
    if(roots[a] == a){
        return a;
    }
    else{
        return roots[a] = find(roots[a]);
    }
}
void merge(int a, int b){//두개 합치기
    int A = find(a);
    int B = find(b);
    if(A != B){
        
        roots[A] = B;
        
    }
}

int main(){
    int idx=1;
    for(int i=3; i<=1000; i+=2){
        for(int j=i*2; j<=1000; j+=i){
            arr[j]=1;
        }
    }
    
    primes.push_back(2);
    for(int i=3; i<=1000; i+=2){
        if(arr[i]==0){
            primes.push_back(i);
        }
    }
    
    int c,a,b,p;
    cin>>c;
    while(c--){
        
        s.clear();
    
        cin>>a>>b>>p;
        
        for(int i=a; i<=b; i++){
            roots[i]=i;
        }
        
        int start_idx=0;
        for(int i=0; i<primes.size(); i++){
            if(primes[i]>=p){
                start_idx=i;
                break;
            }
        }
        
        for(int i=a; i<=b; i++){
            for(int j=i+1; j<=b; j++){
                for(int k=start_idx; k<primes.size(); k++){
                    if(i%primes[k]==0&&j%primes[k]==0){
                        merge(i,j);
//                        break;
                    }
                }
            }
        }
        
        for(int i=a; i<=b; i++){
            roots[i]=find(i);
        }
        
        for(int i=a; i<=b; i++){
            s.insert(find(roots[i]));
        }
        
        printf("Case #%d: %d\n",idx,(int)s.size());
        idx++;
    }
    
    return 0;
}
