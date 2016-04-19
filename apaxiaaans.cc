/* Made with LOVE */
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main(void){

    string str, ans;

    cin >> str;

    ans = "";
    
    ans += str[0];
    
    for(int i = 1; i < str.length(); ++i){
        if(str[i] != str[i - 1])
            ans += str[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
