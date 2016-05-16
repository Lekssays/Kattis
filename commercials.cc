#include <iostream>
#include <vector>

using namespace std;

vector<int> stud, profit;


long long solve(vector<int> profit){
	int sidx = 0, eidx = 0, curidx = 0;
	long long cursum = 0, maxsum = 0;
	for(int i = 0; i < profit.size(); i++){
		cursum += profit[i];
		if(cursum > maxsum){
			maxsum = cursum;
			eidx = i;
			sidx = curidx;
		}
		if(cursum < 0){
			curidx = i + 1;
			cursum = 0;
		}
	}
	return maxsum;
}

int main(void){
	long long N, P, a;

	cin >> N >> P;

	for(int i = 0; i < N; i++){
		cin >> a;
		stud.push_back(a);
		profit.push_back(stud[i] - P);
	}

	cout << solve(profit) << endl;

	return 0;
}