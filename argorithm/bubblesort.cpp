#include <bits/stdc++.h>
using namespace std;

// バブルソート
// O(n^2)
void bubble_sort(vector<int> &vec){
  int temp;
  int n = vec.size();
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - 1 - i; j++){
      if(vec[j] > vec[j + 1]){
        temp = vec[j];
        vec[j] = vec[j + 1];
        vec[j + 1] = temp;
      }
    }
  }
}

int main(){
  vector<int> x = {1, 10, 3, 2, 7, 9, 8, 4, 5, 6};
  int n = x.size();
  bubble_sort(x);
  for(int i = 0; i < n; i++){
    cout << x[i] << " ";
  }
}