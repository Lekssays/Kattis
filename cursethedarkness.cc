#include <cstdio>
#include <iostream>
#include <cmath>
#define MAX 10020

using namespace std;

double square(double a){
	return a * a;
}

int main(void){
	int T, n, ans; 
	double xB, yB, x, y;
	cin >> T;
	while(T--){
		cin >> xB >> yB;
		cin >> n;
		ans = 0;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			double d = sqrt(square(xB - x) + square(yB - y));
			if(d <= 8.000000) ans++;
		}
		if(ans != 0) puts("light a candle");
		else puts("curse the darkness");
	}

	return 0;
}
