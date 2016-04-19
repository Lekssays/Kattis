/* Made with LOVE*/
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int T, n, sum, ans;
    cin >> T;
    while (T--) {
        cin >> n;
        int votes[n];
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> votes[i];
            sum += votes[i];
        }
       
        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (votes[i] > votes[maxIndex]) {
                maxIndex = i;
            }
        }

        bool tie = false;
        for (int i = 0; i < n; i++) {
            if (i != maxIndex) {
                if (votes[i] == votes[maxIndex]) {
                    tie = true;
                    break;
                }
            }
        }

        if (tie) {
            cout << "no winner" << endl;
        } else {
            double majority = ((double) sum) / 2.0;
            double maxVotes = (double) votes[maxIndex];
            if (maxVotes > majority) {
                cout << "majority winner " << (maxIndex + 1) << endl;
            } else {
                cout << "minority winner " << (maxIndex + 1) << endl;
            }
        }
    }
    return 0;
}
