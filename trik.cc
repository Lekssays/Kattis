/* MAde with LOVE*/
#include <iostream>

using namespace std;

int main(void){
    string str;
    cin >> str;
    int loc = 4;
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
        case 'A':
            loc ^= loc != 1 ? 6 : 0;
            break;
        case 'B':
            loc ^= loc != 4 ? 3 : 0;
            break;
        case 'C':
            loc ^= loc != 2 ? 5 : 0;
            break;
        }
    }

    cout << 3 - loc / 2  << endl;

    return 0;
    
} 
