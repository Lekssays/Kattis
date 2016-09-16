#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    int T;
    cin >> T;
    int x = 1;
    while(T--){
        int n;
        cin >> n;
        
        vector<long long> v1(n), v2(n);
        
        for(int i=0; i<n; i++)
            cin >> v1[i];
        

        for(int i=0; i<n; i++)
            cin >> v2[i];
            
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        
        long long answer = 0;
        
        for(int i=0; i<n; i++)
            answer += v1[i] * v2[i];
            
        cout << "Case #" << x++ << ": " << answer << endl;
    }
    
    
    return 0;
}
