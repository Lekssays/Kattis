#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
	int arr[6], cor[6] = {1,1,2,2,2,8};

	for(int i = 0; i < 6; i++){
		cin >> arr[i];
		cout << cor[i] - arr[i] << " ";
	}
	cout << endl;


	return 0;
}