#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(void){
	int n, t, a;
	
	cin >> n >> t;

	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}

	int i = 0, cnt = 0, max = 0;
	
	for(int i = 0; i < n; i++){
		if(max + v[i] <= t) cnt++;
		max += v[i];
	}

	cout << cnt << endl;

	return 0;
}
