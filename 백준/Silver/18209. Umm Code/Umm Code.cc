#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

int main(){
    string ans;
    deque<int> buffer;
    
    while(!cin.eof()){
        string s;
        cin>>s;
        bool flag=true;
        for(int i=0; i<s.size(); i++){
            if((s[i]!='u'&&s[i]!='m')&&((65<=s[i]&&s[i]<=90)||(97<=s[i]&&s[i]<=122)||(48<=s[i]&&s[i]<=57))){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int i=0; i<s.size(); i++){
                    
                if(s[i]=='u'){
                    buffer.push_back(1);
                }
                if(s[i]=='m'){
                    buffer.push_back(0);
                }
                
                if(buffer.size()==7){
                    char ch=0;
                    int dig=0;
                    while(buffer.size()>0){
                        ch+=buffer.back()*pow(2,dig);
                        dig++;
                        buffer.pop_back();
                        
                    }
                    ans.push_back(ch);
                }
            }
        }
    }
    cout<<ans;
    
    return 0;
}
// 1101001 1100011 1110000 1100011

//105 99 112 99


