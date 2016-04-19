/* MAde with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    int grid[6][6], sum[6] = {0}, id, max = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            cin >> grid[i][j];
            sum[i] += grid[i][j];
        }
    }

    for (int i = 0; i < 5; ++i){
        if(sum[i] > max) {
            max = sum[i];
            id = i;
        }
    }

    cout << id + 1 << " " << max << endl;

    return 0;
}
