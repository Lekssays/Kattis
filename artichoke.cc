#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
vector<double> price;

double f(int p, int a, int b, int c, int d, int k){
	return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main(void){
	int p, a, b, c, d, n;
	double dec;

	cin >> p >> a >> b >> c >> d >> n;
	double max = 0.0, diff = 0.0, res = 0.0, val;
	for(int i = 1; i <= n; i++){
		val = f(p,a,b,c,d,i);
		if(max < val) max = val;
		else if(max > val && i > 1){
			diff = max - val;
			if(res < diff) res = diff;
		}
	}

	if(res == 0.0) cout << "0.000000" << endl;
	else printf("%.6f\n",res);

	return 0;
}