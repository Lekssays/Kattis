/* Made with LOVE*/
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

char grid[9][9];
int row[90] = {0}, col[90] = {0}, mdg[90] = {0} ,odg[90] = {0}, flag = 1, star = 0;

int main(void){

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> grid[i][j];
            if( grid[i][j] == '*' ) star++;
        }
    }

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if( grid[i][j] == '*' ){
                row[i]++;
                col[j]++;
                mdg[i + j]++;
                odg[ i + ( 7 - j) ]++; // 2 * N - 1
            }
        }
    }

    for (int i = 0; i < 16; i++){
        if( row[i] > 1 || col[i] > 1 || mdg[i] > 1 || odg[i] > 1)
            flag = 0;
    }

    if( star == 8 && flag ) puts("valid");
    else puts("invalid");

    return 0;
}
