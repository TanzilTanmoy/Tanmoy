#include<bits/stdc++.h>
using namespace std;

#define INF -2e9
int C[5];

int coin_changing(int W, int i, int n, int** dp){

     if(W<0)return INF;
     if(i==n){
        if(W==0)return 0;
        return INF;
     }

     if(dp[i][W] != -1)return dp[i][W];

     int res1 = coin_changing(W-C[i], i, n, dp) + 1;
     int res2 = coin_changing(W, i+1, n, dp);

     return dp[i][W] = max(res1, res2);

}

int main()
{

    int W;
    cin>>W>>C[0]>>C[1]>>C[2];

    int** dp;
    dp = new int*[4];

    for(int i=0; i<4; i++)dp[i] = new int[W+1];

    for(int i=0; i<4; i++){
        for(int j=0; j<W+1; j++){
            dp[i][j]= -1;
        }
    }

    cout<<coin_changing(W, 0, 3, dp);

    return 0;
}
