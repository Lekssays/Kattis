#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
	string str1, str2, temp;
	int T;

	cin >> T;

	while(T--){
		cin >> str1;
		cin >> str2;

		cout << str1 << endl;
		cout << str2 << endl;
		for(int i = 0; i < str1.length(); i++){
			if(str1[i] == str2[i]) cout << ".";
			else cout << "*";
		}
		cout << endl;
		cout << endl;
	}

	return 0;
}