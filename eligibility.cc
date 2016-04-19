/*  Made with LOVE*/
#include <cstdio>
#include <iostream>

using namespace std;

const int MAX = 1002;

int main(void){
    int T, enr_year, brth_year;

    cin >> T;
    
    int i = 0;
    
    while(T--){
        int courses;
        string name, enrol, birth;
        cin >> name >> enrol >> birth >> courses;
        enr_year = (enrol[0] - '0') * 1000 + (enrol[1] - '0') * 100 + (enrol[2] - '0') * 10 + (enrol[3] - '0');
        brth_year = (birth[0] - '0') * 1000 + (birth[1] - '0') * 100 + (birth[2] - '0') * 10 + (birth[3] - '0');
        if(enr_year >= 2010) {
            cout << name << " " << "eligible" << endl;
            continue;
        } else if(brth_year >= 1991) {
            cout << name << " " << "eligible" << endl;
            continue;
        } else if(courses < 41 && brth_year < 1991 && enr_year < 2010) {
            cout << name << " " << "coach petitions" << endl;
            continue;
        } else {
            cout << name << " " << "ineligible" << endl;
        }

        i++;
    }

    return 0;
}
