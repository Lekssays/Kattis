/* MAde with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
    int H, M, tM, tH, newH, newM;

    cin >> H >> M;
    if( H == 0 ){
        H = 24;
        tH = H * 60;
        tM = tH + M;
        tM -= 45;
        newH = tM / 60;
        newM = (tM - (newH * 60)) % 60;
    } else {
        tH = H * 60;
        tM = tH + M;
        tM -= 45;
        newH = tM / 60;
        newM = tM - (newH * 60);        
    }

    cout << newH  << " " << newM  << endl;

    return 0;
}
