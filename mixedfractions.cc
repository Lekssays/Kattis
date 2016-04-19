/* Made with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    long long N , M, P , K;

    while(true){
        scanf("%lld%lld",&N,&M);
        if(N == 0 && M == 0) break;
        P = N / M;
        K = N - ( P * M );

        cout << P << " " << K << " / " << M << endl;        
    }

    return 0;
}
