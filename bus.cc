#include <cstdio>
#include <iostream>

using namespace std;

int main(void){

    int T, s;

    cin >> T;

    while(T--){
        cin >> s;
        int n = 1;
        for(int i = 0; i < s - 1; i++){
            n *= 2;
            n++;
        }
        cout << n << endl;
    }

    return 0;
}
