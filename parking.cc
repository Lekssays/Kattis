/* MAde with LOVE*/
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int range[108] = {0}, car[5][5] = {0}, sum = 0, A , B , C;

    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> car[i][j];


    for (int i = car[0][0]; i < car[0][1]; ++i){
        range[i]++;
    }

    for (int i = car[1][0]; i < car[1][1]; ++i){
        range[i]++;
    }

    for (int i = car[2][0]; i < car[2][1]; ++i){
        range[i]++;
    }

    for (int i = 0; i < 100; ++i){
        if(range[i] == 1) sum += range[i] * A;
        else if (range[i] == 2) sum += range[i] * B;
        else if(range[i] == 3) sum += range[i] * C;
    }

    cout << sum << endl;

    return 0;
}
