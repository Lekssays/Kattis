#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int T;
    cin >> T;

    while(T--){

        long long sz1;
        cin >> sz1;

        vector<long long> X(sz1 + 1);
        for(int i=0; i < sz1 + 1; i++)
            cin >> X[i];

        long long sz2;
        cin >> sz2;
        
        vector<long long> Y(sz2 + 1);
        for(int i=0; i < sz2 + 1; i++)
            cin >> Y[i];

        vector<long long> Z(sz1 + sz2 + 1 , 0);

        for(int i=0; i < X.size(); i++){
            for(int j=0; j < Y.size(); j++)
                Z[i+j] += X[i]*Y[j];
        }

        cout << sz1 + sz2 << endl;

        for(int i=0; i < Z.size(); i++)
            cout << Z[i] << " ";

        cout << endl;
    }

    return 0;
}
