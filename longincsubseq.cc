#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

typedef pair < int , int > PI;

vector<int> res, V;

vector<int> LIS(vector<int> A){
    int N = A.size(),i ,j = -1 , t;
    vector<int> pre(N, -1);
    map<int,int> m;
    map<int,int>::iterator k, l;
    for (i = 0 ; i < N ; i++){
        if (m.insert(PI(A[i],i)).second){
           k = m.find(A[i]);
           l = k;
           k++;
           if (l == m.begin())
                  pre[i] = -1;
           else {
               l--;
               pre[i] = l->second;
           }
           if (k != m.end())
              m.erase(k);
        }
    }
    k = m.end();
    k--;
    j = k->second;
    while (j != -1){
          res.push_back(j);
          j = pre[j];
    }
    sort(res.begin(),res.end());
    return res;
}

int main(void){
    int N;
    while(scanf("%d", &N) != EOF){
      res.clear();
      V.clear();
      for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        V.push_back(tmp);
      }
      LIS(V);
      cout << res.size() << endl;
      for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
      cout << endl;
    }

  return 0;
}
