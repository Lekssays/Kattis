/* Made with LOVE */
#include <iostream>
#include <vector>

using namespace std;

vector<int> V;

int missing(vector<int> V){
    int n = V.size(), a = V[0], b = 1; 
    for (int i = 1; i < n; i++) a = a ^ V[i];      
    for (int i = 2; i <= n + 1; i++) b = b ^ i;         
    return (a ^ b);
}

int main(void){
    int R, N, res = 0, M;
    
    cin >> R >> N;
    
    if(N == 0) cout << "1" << endl;
    else { 
        for (int i = 0; i < N; i++){
            cin >> M;
            V.push_back(M);
        }
        res = missing(V);
        if(N == R) cout << "too late" << endl;
        else cout << res << endl;
    }
    
    return 0;
}
