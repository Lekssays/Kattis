/* MAde with LOVE*/
#include <iostream>

using namespace std;

int arr[42];

int main(void){
    int T = 10, x, dist = 0;

    for(int i = 0; i < 10; i++){
        cin >> x;
        arr[x % 42] = 1;
    }

    for(int i = 0; i < 42; i++){
        if(arr[i] == 1) dist++;
    }

    cout << dist << endl;

    return 0;
} 
