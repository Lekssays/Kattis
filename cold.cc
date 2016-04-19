/* Made with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

int const MAX = 1003;

int main(void){
    int N, cnt = 0;
    int arr[MAX];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] < 0) cnt++;
    }
    cout << cnt << endl;
        
    return 0;
}
