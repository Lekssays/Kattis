#include <cstdio>
#include <iostream>

#define MAXN 1000010

using namespace std;

int p[MAXN];
int w[MAXN];

int find(int x) {
  return ((p[x] == x) ? x : (p[x] = find(p[x])));
}
void merge(int x, int y){
  if(w[x] < w[y]) {
    p[find(x)] = find(y);
    w[y] += w[x];
  }
  else {
    p[find(y)] = find(x);
    w[x] += w[y];
  }
}

int main(void){
  for(int i = 0; i < MAXN; i++) {
    p[i] = i;
    w[i] = 1;
  }

  int N, E, a, b;
  string ch;
  cin >> N >> E;
  for(int i = 0; i < E; i++){
    cin >> ch >> a >> b;
    if(ch == "?"){
      if(find(a) == find(b)) puts("yes");
      else puts("no");
    } else {
        if(find(a) != find(b))
            merge(a,b);
    }
  }

  return 0;
}
