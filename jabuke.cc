#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	int x1, y1, x2, y2, x3, y3, N, pts[101][2], in = 0;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> N;
	for(int i = 0; i < N; i++) cin >> pts[i][0] >> pts[i][1];

	double area = fabs(((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)))) / 2;
	printf("%.1f\n", area);
 	
 	double area1, area2, area3, temp;
	for(int i = 0; i < N; i++){
		area1 = 0.0, area2 = 0.0, area3 = 0.0, temp = 0.0;
		area1 = fabs(((pts[i][0] * (y2 - y3)) + (x2 * (y3 - pts[i][1])) + (x3 * (pts[i][1] - y2)))) / 2;
		area2 = fabs(((x1 * (pts[i][1] - y3)) + (pts[i][0] * (y3 - y1)) + (x3 * (y1 - pts[i][1])))) / 2;
		area3 = fabs(((x1 * (y2 - pts[i][1])) + (x2 * (pts[i][1] - y1)) + (pts[i][0] * (y1 - y2)))) / 2;
		temp = area1 + area2 + area3;
		if(temp == area) in++;
	}
	cout << in << endl;
	
	return 0;
}