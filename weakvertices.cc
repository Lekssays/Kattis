#include <cstdio> 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int grid[21][21];

int main(void){
    int N;
    while(true){
        set<int> S;
        
        cin >> N;

        if(N == -1) return 0;

        int vertx = 0;

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> grid[i][j];
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                for(int k = 0; k < N; k++){
                    if(grid[i][j] + grid[i][k] + grid[j][k] > 2){
                        S.insert(i);
                    }
                }
            }
        }

        vector<int> V(N, 0);

        for(auto p : S)
            V[p]++;

        for(int i=0; i < V.size(); i++)
                if(V[i] == 0)
                    cout << i << " ";
        
        cout << endl;

        }

    return 0;
}
