#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;
  int X = 0;

  for (int i = 0; i < n; ++i){
    string statement;
    cin >> statement;

    if (statement == "X++" || statement == "++X") {
      X++;
    } else if (statement == "X--" || statement == "--X"){
      X--;
    }  
  }

  cout << X << endl;
  return 0;
}
