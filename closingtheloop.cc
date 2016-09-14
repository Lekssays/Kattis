#include <cstdio> 
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#include <set>

using namespace std;

int main(void){
    int t;
    cin >> t;
    int k = 1;
    while(t--){
        int n;
        cin >> n;

        vector<string> v(n);
        vector<int> r, b;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i][v[i].size() - 1] == 'R'){
                int rr = stoi(v[i].substr(0, v[i].size() - 1));
                r.push_back(rr - 1);              
            }
            else {
                int bb = stoi(v[i].substr(0, v[i].size() - 1));
                b.push_back(bb - 1);              
            }

        }

        if(min(r.size(), b.size()) == 0)
            cout << "Case #" << k++ << ": " << "0" << endl;
        
        else{

            sort(r.begin(), r.end());
            sort(b.begin(), b.end());
            reverse(r.begin(), r.end());
            reverse(b.begin(), b.end());

            int sum = 0;

            for(int i=0; i < min(r.size(), b.size()); i++)
                sum += r[i] + b[i];

            cout << "Case #" << k++ << ": " << sum << endl;
        }
        
    }

    return 0;
}
