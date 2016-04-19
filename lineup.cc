/*Made with LOVE*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> players, temp;

int main(void){

    int N, flagDEC = 0, flagINC = 0;
    string str;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> str;
        players.push_back(str);
        temp.push_back(str);
    }

    sort(temp.begin(),temp.end());

    for (int i = 0; i < N; i++){
        if(players[i] == temp[i]){
            flagINC++;
        } 
    }

    if(flagINC == N) goto END;
    else {
        reverse(temp.begin(),temp.end());
        for (int i = 0; i < N; i++){
            if(players[i] == temp[i]){
                flagDEC++;
            } 
        }       
    }

    END: ;

    if(flagINC == N) puts("INCREASING");
    else if(flagDEC == N) puts("DECREASING");
    else puts("NEITHER");

    return 0;
}
