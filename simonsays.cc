#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void){
  int T;
  cin >> T;
  cin.ignore();
  while(T--){
    string line, says = "Simon says";
    getline(cin, line);
    int tr = line.find("Simon");
    if(tr == 0 && line[0] == 'S' && line[9] == 's'){
      for(int i = tr + says.length() + 1; i < line.length(); i++)
        cout << line[i];
      cout << endl;
    }
  }

  return 0;
}
