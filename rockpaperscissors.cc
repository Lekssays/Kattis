/* Made with LOVE*/
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main(void){
    int N, K, p1, p2,win[102],lost[102];
    string game1, game2;
    
    while(true){
        cin >> N;
        if(N == 0) return 0;
        cin >> K;

        memset(win, 0, sizeof(win));
        memset(lost, 0, sizeof(lost));

        for (int i = 0; i < (K * N * (N - 1)) / 2; i++){
            cin >> p1 >> game1 >> p2 >> game2;
            
            if( game1 == "paper" && game2 == "rock"){
                win[p1]++;
                lost[p2]++;
            } else if( game1 == "rock" && game2 == "paper"){
                win[p2]++;
                lost[p1]++;
            } else if( game1 == "scissors" && game2 == "paper"){
                win[p1]++;
                lost[p2]++;
            } else if( game1 == "paper" && game2 == "scissors" ){
                win[p2]++;
                lost[p1]++;
            } else if( game1 == "rock" && game2 == "scissors" ){
                win[p1]++;
                lost[p2]++;
            } else if ( game1 == "scissors" && game2 == "rock"){
                win[p2]++;
                lost[p1]++;
            }
        }

        for(int i = 1; i <= N; i++) {
            if(win[i] + lost[i] == 0) puts("-");
            else {
                double winp = win[i] / (1.0 * (win[i] + lost[i]));
                printf("%.3lf\n",winp);
            }
        }

        puts("");
    }

    return 0;
}
