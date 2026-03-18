#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

double pi=3.14159265358979;
int main(){
    double n;
    cin>>n;
    n=n/pi;
    n=sqrt(n);
    
    cout.precision(100);
    cout<<(n+1)*2.0*(n+1)*2.0;
    
    return 0;
}
