/* Made with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    char keyboard[5][40] = {{'`','1','2','3','4','5','6','7','8','9','0','-','='},
                           {'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},
                           {'A','S','D','F','G','H','J','K','L',';','\'','&','&'},
                           {'Z','X','C','V','B','N','M',',','.','/','&','&','&'}};



    string str;
    
    while(getline(cin, str)){

        for (int i = 0; i < str.length(); i++){
            for (int k = 0; k < 4; k++){
                for (int p = 1; p < 14; p++){
                    if(str[i] == keyboard[k][p]){
                        cout << keyboard[k][p - 1];
                    } 
                }
            }
            if(str[i] == ' ') cout << " ";
        }
        cout << endl;       
    }


    return 0;
}
