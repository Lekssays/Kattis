/* Made with LOVE*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void){
    string str1, str2;
    cin >> str1;
    cin >> str2;
    if(str1.length() < str2.length() ) puts("no");
    else puts("go");
    return 0;
} 
