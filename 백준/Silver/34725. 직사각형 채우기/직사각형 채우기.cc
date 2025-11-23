#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[2000][2000];

int main(){
    int idx=0;
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n/2; i++){
        for(int j=0; j<m/2; j++){
            idx++;
            arr[n/2+i][m/2+j]=idx;
            arr[n/2-i-1][m/2-j-1]=idx;
            arr[n/2+i][m/2-j-1]=idx;
            arr[n/2-i-1][m/2+j]=idx;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
