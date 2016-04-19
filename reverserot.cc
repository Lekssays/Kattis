/* Made with LOVE*/
#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;
const int SIZE = 41;
int main(void){
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    string str;
    int n;

    while(true){
        cin >> n >> str;
        if( n == 0) return 0;
        reverse(str.begin(), str.end());
        for (int i = 0; i < str.length(); i++){
            for (int j = 0; j < alpha.length(); j++){
                if(alpha[j] == str[i]){
                    cout << alpha[(j + n) % 28];
                }
            }
        }
        cout << endl;   
    }

    return 0;
} 
