/* MAde with LOVE*/
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void){
    string str;
    int wspace = 0, lcase = 0 , ucase = 0, sym = 0;

    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '_') wspace++;
        else if(str[i] >= 97 && str[i] <= 122) lcase++;
        else if( str[i] >= 65 && str[i] <= 90 ) ucase++;
        else sym++;
    }

    printf("%.6f\n", (double) wspace / str.length());
    printf("%.6f\n", (double) lcase / str.length());
    printf("%.6f\n", (double) ucase / str.length());
    printf("%.6f\n", (double) sym / str.length());

    return 0;
}
