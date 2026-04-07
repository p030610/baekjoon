#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

unordered_map<int,int> m;
deque<char> hist;
deque<int> streak_hist;
int before;
int streak;

int main(){
//    streak_hist.push_back(0);
    m.reserve(300000);
    int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0; i<s.size(); i++){
        m[i-1]=i;
    }
    m[n-1]=-1;
    
    for(int i=0; i<s.size(); i++){
        
        
//        if(hist.size()>0){
        if(hist.size()>0&&s[i]==hist.back()){
            streak_hist.back()++;
        }
        else{
            streak_hist.push_back(0);
        }
//        }
        hist.push_back(s[i]);
        
        while(streak_hist.size()>0&&streak_hist.back()+1==k){
            streak_hist.pop_back();
            for(int j=0; j<k; j++){
                hist.pop_back();
            }
        }
        
    }
    
    for(int i=0; i<hist.size(); i++){
        printf("%c",hist[i]);
    }
    return 0;
}
//aabbbaabbaac
//aaaabbaac
//abbaac
