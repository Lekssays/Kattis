#include <cstdio>
#include <iostream>
#define MAXN 200020

using namespace std;

int p[MAXN];

int find(int x) {
  return p[x] == x ? x : p[x] = find(p[x]);
}

void merge(int x, int y){
  p[find(x)] = find(y);
}

int main(void){
  for(int i = 0; i < MAXN; i++) p[i] = i;
  int n, m, a, b;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> a >> b;
    a--;
    b--;
    merge(a, b);
  }
  bool ok = false;
  for(int i = 0; i < n; i++){
    if(find(i) != find(0)){
      cout << i + 1 << endl;
      ok = true;
    }
  }
  if(!ok) puts("Connected");
  return 0;
}
