/* MAde with LOVE*/
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> V;

int main(void){
    int T, C;

    cin >> T;

    while(T--){

        int vis = 1;

        cin >> C;

        while(C--){
            string str;
            cin >> str;
            V.push_back(str);
        }

        sort(V.begin(), V.end());
    
        for (int i = 1; i < (int) V.size(); i++){
            if(V[i - 1] != V[i]) vis++;
        }
        cout << vis << endl;
        V.clear();
    }

    return 0;
}
