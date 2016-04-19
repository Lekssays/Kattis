/* Made with LOVE*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<string> V;

bool cmp(string S1, string S2){
    string s1 = S1.substr(0,2);
    string s2 = S2.substr(0,2);
    return (s1 < s2);
}

int main(void){
    int N;
    int C = 0;
    while(true) {
        if(C > 0) cout <<  endl;
        C++;
        V.clear();

        cin >> N;

        if(N == 0) return 0;

        for (int i = 0; i < N; ++i){
            string str;
            cin >> str;
            V.push_back(str);
        }

        stable_sort(V.begin(),V.end(),cmp);
        for (int i = 0; i < N; ++i){
            cout << V[i] << endl;
        }
        cout << endl;

    }

    return 0;
}
