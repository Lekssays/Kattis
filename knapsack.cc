#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

set<int> S;

int keep[2002][2002] = {0}, dp[2002][2002] = {0};

int solve(vector<int> V, vector<int> W, int C, int N){
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= C; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if( W[i - 1] <= j){
                dp[i][j] = max(V[i-1] + dp[i - 1][j - W[i - 1]], dp[i - 1][j]);
                if((V[i - 1] + dp[i - 1][j - W[i - 1]]) > dp[i - 1][j]){
                   keep[i][j] = 1;
                } else {
                    keep[i][j] = -1;
                }
            }
            else {
                dp[i][j] = dp[i-1][j];
                keep[i][j] = -1;
            }
        }
    }
    return dp[N][C];
}

void construct(int N, int C, vector<int> W){
    while(N > 0){
        if(keep[N][C] == 1){
            S.insert(N - 1);
            N--;
            C -= W[N];
        } else {
            N--;
        }
    }
    return;
}

int main(void){
    double C;
    int N;

    while(!cin.eof()){
        cin >> C >> N;
        
        vector<int> V(N), W(N);
        
        for(int i = 0; i < N; i++)
            cin >> V[i] >> W[i];
            
        int c = (int) C, sol = solve(V, W, c, N);
        
        construct(N, C, W);
        
        cout << S.size() << endl;
        
        for(auto p : S)
            cout << p << " ";
        cout << endl;
        S.clear();
    }

    return 0;
} 
