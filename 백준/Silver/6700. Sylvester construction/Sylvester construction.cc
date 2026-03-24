#include <bits/stdc++.h>
#include <numeric>
#define DV 1000000007
using namespace std;
typedef long long ll;

ll ans[50][50];
int arr[40][40][40];

ll c,n,x,y,w,h;

void draw(ll sign, ll width, ll startx, ll starty, ll endx, ll endy){
    if(((startx<=x&&x<=endx)&&(starty<=y&&y<=endy))||
       ((startx<=x&&x<=endx)&&(starty<=y+width-1&&y+width-1<=endy))||
       ((startx<=x+width-1&&x+width-1<=endx)&&(starty<=y&&y<=endy))||
       ((startx<=x+width-1&&x+width-1<=endx)&&(starty<=y+width-1&&y+width-1<=endy))){
        if(width==32){
            for(ll i=startx; i<=endx; i++){
                for(ll j=starty; j<=endy; j++){
                    if(x<=i&&i<x+w&&y<=j&&j<y+h){
                        ans[j-y][i-x]=sign*arr[32][j-starty][i-startx];
                    }
                }
            }
            return;
        }
        else{
            draw(sign, width/2, startx,starty, startx+width/2-1, starty+width/2-1);
            draw(sign, width/2, startx+width/2,starty, endx, starty+width/2-1);
            draw(sign, width/2, startx,starty+width/2, startx+width/2-1, endy);
            draw(-sign, width/2, startx+width/2,starty+width/2, endx, endy);
        }
    }
    else{
        return;
    }
}

int main(){
    arr[1][0][0]=1;
    arr[2][0][0]=1;
    arr[2][0][1]=1;
    arr[2][1][0]=1;
    arr[2][1][1]=-1;

    for(int i=4; i<=32; i=i*2){
        for(int j=0; j<i/2; j++){
            for(int k=0; k<i/2; k++){
                arr[i][j][k]=arr[i/2][j][k];
            }
        }
        for(int j=0; j<i/2; j++){
            for(int k=0; k<i/2; k++){
                arr[i][j+i/2][k]=arr[i/2][j][k];
            }
        }
        for(int j=0; j<i/2; j++){
            for(int k=0; k<i/2; k++){
                arr[i][j][k+i/2]=arr[i/2][j][k];
            }
        }
        for(int j=0; j<i/2; j++){
            for(int k=0; k<i/2; k++){
                arr[i][j+i/2][k+i/2]=-arr[i/2][j][k];
            }
        }
    }
    scanf("%lld",&c);
    while(c--){
        scanf("%lld %lld %lld %lld %lld",&n,&x,&y,&w,&h);
        
        draw(1,pow(2,62),0,0,pow(2,62)-1,pow(2,62)-1);
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                printf("%lld ",ans[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        
    }
    
    return 0;
}


// 1 1
// 1 -1

// 1 1 1 1
// 1 -1 1 -1
// 1 1 -1 -1
// 1 -1 -1 1
