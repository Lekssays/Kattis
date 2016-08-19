#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
    int N;
    string str1, str2;
    
    cin >> N;
    cin >> str1;
    cin >> str2;
    
    if((N % 2) == 0){
        if(str1 == str2) 
            puts("Deletion succeeded");
        else 
            puts("Deletion failed");
    } else {
        int ok = 0;
        for(int i = 0; i < str1.length(); i++){
            if((str1[i] == '0' && str2[i] == '1') || (str1[i] == '1' && str2[i] == '0'))
                ok++;
        }
        if(ok != str1.length())
            puts("Deletion failed");
        else
            puts("Deletion succeeded");
    }
    
    return 0;
}
