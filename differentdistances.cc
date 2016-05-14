#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void){
	double x1, y1, x2, y2, p;

	while(true){
		cin >> x1 >> y1 >> x2 >> y2 >> p;
		if(x1 == 0) return 0;
		double res;
		double x, y;
		x = x1 - x2;
		y = y1 - y2;
		res = pow(pow(abs(x),p) + pow(abs(y),p), (double) (1/p));
		printf("%.4f\n", res);
	}


	return 0;
}