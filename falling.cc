#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPerfect(long long n) {
    if (n < 0)
        return false;
    long long root(round(sqrt(n)));
    return n == root * root;
}

int main(void){
	int D;
	cin >> D;

	for(long long n1 = 0; n1 < 200000; n1++){
		long long sqr = n1*n1 + D;
		if(isPerfect(sqr)){
			cout << n1 << " " << sqrt(sqr) << endl;
			return 0;
		}
	}
	cout << "impossible" << endl;
	return 0;
}
