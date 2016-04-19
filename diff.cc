/* MAde with LOVE*/
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(void){
    long long A , B;
    while(cin >> A >> B)
        cout << abs(A - B) << endl;
    return 0;
}
