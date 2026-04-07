#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

char arr[100][100];

int main(){
    
    string s;
    while(1){
        deque<int> d;
        cin>>s;
        if(s=="end"){
            cout<<"end";
            break;
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<29; j++){
                arr[i][j]=' ';
            }
        }
        d.push_back(s[0]-48);
        d.push_back(s[1]-48);
        d.push_back(s[3]-48);
        d.push_back(s[4]-48);
        int x=0;
        
        for(int i=0; i<d.size(); i++){
            if(d[i]==1){
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
            }
            else if(d[i]==2){
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                
                arr[3][x]='+';
                arr[4][x]='|';
                arr[5][x]='|';
                arr[6][x]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                arr[3][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
            }
            else if(d[i]==3){
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
            }
            else if(d[i]==4){
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
            }
            else if(d[i]==5){
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                arr[3][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
            }
            else if(d[i]==6){
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                arr[4][x]='|';
                arr[5][x]='|';
                arr[6][x]='+';
                
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                arr[3][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
            }
            else if(d[i]==7){
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
            }
            else if(d[i]==8){
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                arr[4][x]='|';
                arr[5][x]='|';
                arr[6][x]='+';
                
                
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                arr[3][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
            }
            else if(d[i]==9){
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                
                
                
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[3][x]='+';
                arr[3][x+1]='-';
                arr[3][x+2]='-';
                arr[3][x+3]='-';
                arr[3][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
                
            }
            else{
                arr[0][x]='+';
                arr[1][x]='|';
                arr[2][x]='|';
                arr[3][x]='+';
                arr[4][x]='|';
                arr[5][x]='|';
                arr[6][x]='+';
                
                
                arr[0][x+4]='+';
                arr[1][x+4]='|';
                arr[2][x+4]='|';
                arr[3][x+4]='+';
                arr[4][x+4]='|';
                arr[5][x+4]='|';
                arr[6][x+4]='+';
                
                arr[0][x]='+';
                arr[0][x+1]='-';
                arr[0][x+2]='-';
                arr[0][x+3]='-';
                arr[0][x+4]='+';
                
                arr[6][x]='+';
                arr[6][x+1]='-';
                arr[6][x+2]='-';
                arr[6][x+3]='-';
                arr[6][x+4]='+';
            }
            
            if(i==1){
                x+=7;
                arr[2][x]='o';
                arr[4][x]='o';
                x+=3;
            }
            else{
                x+=7;
            }
        }
        
        
        for(int i=0; i<7; i++){
            for(int j=0; j<29; j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    
    
    return 0;
}
