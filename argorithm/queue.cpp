#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<int> d = {1, 10, 3, 2, 7, 9, 8, 4, 5, 6};

  for(int i = 0; i < d.size(); i++){
    d.pop_front();
    d.push_back(0);
    for(int j = 0; j < d.size(); j++){
      cout << d.at(j) << " ";
    }
    cout << endl;
  }

  cout << endl;
}