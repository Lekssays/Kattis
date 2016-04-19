/* MAde with LOVE*/
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct team {
    int t;
    char p;
    string s;
    team(int _t, char _p, string _s){
        t = _t;
        p = _p;
        s = _s;
    }
};

const int N = 103;

vector<team> v[N];

int main(void){
    int t, i = 0 , j = 0, solved = 0, sum = 0;
    char p;
    string s;
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int arr[N] = {0};

    while( true) { 
        cin >> t;
        if(t == -1) break;
        cin >> p >> s;
        v[i++].push_back(team(t,p,s));
    }

    for (int p = 0; p < i; p++){
        for (int j = 0; j < v[p].size() ; j++){
            if(v[p][j].s == "wrong"){
                if(v[p][j].p == alpha[v[p][j].p - 'A']){
                    arr[v[p][j].p - 'A'] += 20;
                    
                }
            } else if( v[p][j].s == "right" ){
                if(v[p][j].p == alpha[v[p][j].p - 'A']){
                    arr[v[p][j].p - 'A'] += v[p][j].t;
                    sum += arr[v[p][j].p - 'A'];
                }
                solved++;
            }
        }
    }

    cout << solved << " " << sum << endl;

    return 0;
}
