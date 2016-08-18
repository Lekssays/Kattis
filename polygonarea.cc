#include <cstdio>
#include <iostream>
#include <cmath>
#define MAX 1010

using namespace std;

int grid[MAX][MAX];

int main(void){
  int n;
  while(true){
    cin >> n;
    if(n == 0) return 0;
    for(int i = 0; i < n; i++)
      cin >> grid[0][i] >> grid[1][i];

    int X = 0, Y = 0;

    for(int i = 0; i < n - 1; i++){
      X += grid[0][i] * grid[1][i + 1];
      Y += grid[1][i] * grid[0][i + 1];
    }

    X += grid[0][n - 1] * grid[1][0];
    Y += grid[1][n - 1] * grid[0][0];

    double sol = 0.0;
    sol = (X - Y) / 2.0;

    if(sol < 0) printf("CW %.1f\n", fabs(sol));
    else printf("CCW %.1f\n", fabs(sol));
  }

  return 0;
}
