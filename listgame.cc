#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int ans = 0;

void solve(long long N){
    while(N % 2 == 0){
        ans++;
        N /= 2;
    }
    
    for(int i = 3; i <= sqrt(N); i++){
        while(N % i == 0){
            ans++;
            N /= i;
        }
    }
    
    if(N > 2)
        ans++;
}

int main(void){
    long long N;
    cin >> N;
    solve(N);
    cout << ans << endl;
    return 0;
}
