/* Made with LOVE*/
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int N, arr[20][3] = {{0,0}}, tot;

    while(true){
        cin >> N;
        if(N == -1) break;
        tot = 0;
        for (int i = 1; i <= N; ++i){
            cin >> arr[i][0] >> arr[i][1];
            tot += (arr[i][0] * (abs(arr[i][1] - arr[i - 1][1])));
        }
        cout << tot << " miles" << endl;
    }

    return 0;
} 
