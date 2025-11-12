#include <bits/stdc++.h>
using namespace std;

// 1 ~ nまでの順列を全パターン列挙する
int n = 5;
vector<int> p(n);

void show(){
  int count;
  int i;
  count++;
  for(int i = 0; i < n; i++){
    cout << p.at(i);
  }
  cout << endl;
}

vector<char> ok(n + 1);

void put(int pos, int k){
  int j;
  p.at(pos) = k;
  if(pos == n - 1)show();
  else{
    ok.at(k) = false;
    for(int j = 1; j <= n; j++){
      if(ok.at(j))put(pos + 1, j);
    }
    ok.at(k) = true;
  }
}

void genperm(int &n){
  int k;
  int count = 0;
  for(k = 1; k <= n; k++)ok.at(k) = true;
  for(k = 1; k <= n; k++)put(0, k);
}

int main(){
  genperm(n);
  return 0;
}