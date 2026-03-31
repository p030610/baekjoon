#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;
map<pair<int,int>,int> m;
map<int,int> m2;

int main(){
    m2[29]=2020;
    m2[28]=2021;
    int t;
    m[{8,29}]=2017;
    m[{29,8}]=2017;

    m[{8,11}]=2018;
    m[{11,8}]=2018;

    m[{26,29}]=2019;
    m[{29,26}]=2019;

    m[{29,35}]=2022;
    m[{35,29}]=2022;

    m[{35,37}]=2023;
    m[{37,35}]=2023;

    m[{29,37}]=2024;
    m[{37,29}]=2024;

    m[{12,29}]=2025;
    m[{29,12}]=2025;

    scanf("%d",&t);
    string a,b;
    while(t--){
        int n;
        scanf("%d",&n);
        if(n==1){
            cin>>a;
            
            if(m2.contains((int)a.size())==false){
                printf("Goodbye, ChAOS!\n");
            }
            else if(m2.contains((int)a.size())){
                printf("%d\n",m2[(int)a.size()]);
            }
        }
        else{
            cin>>a>>b;
            if(m.contains({a.size(),b.size()})==false&&m.contains({b.size(),a.size()})==false){
                printf("Goodbye, ChAOS!\n");
            }
            else if(m.contains({a.size(),b.size()})){
                printf("%d\n",m[{a.size(),b.size()}]);
            }
            else if(m.contains({b.size(),a.size()})){
                printf("%d\n",m[{b.size(),a.size()}]);
            }
        }
        

    }
    
    return 0;
}
