#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main(void){
	string str;
	while(cin >> str){
		int ans = 0;
		for(int len = 1; len < str.length(); len++){
			map<string, int> sol;
			for(int j = 0; j < str.length(); j++){
				if(len + j <= str.length())
					sol[str.substr(j, len)]++;
			}
			bool flag = true;
			for(auto m : sol){
				if(m.second <= 1)
					flag = false;
			}
			if(flag) ans = len;
		}
		cout << ans << endl;
	}

	return 0;
}
