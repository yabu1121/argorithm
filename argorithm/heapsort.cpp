#include <bits/stdc++.h>
using namespace std;

// ヒープの作成
void down_heap(vector<int> &vec, int i, int n) {
  int x = vec[i];
  int j; 
  while ((j = 2 * i + 1) < n) {
    if (j + 1 < n && vec[j] < vec[j + 1])j++;
    if (x >= vec[j])break;
    vec[i] = vec[j];
    i = j;
  }
  vec[i] = x;
}

//  ソートの実行
void heap_sort(vector<int> &vec) {
  int n = vec.size();
  if (n <= 1) return;
  for (int k = (n / 2) - 1; k >= 0; k--)down_heap(vec, k, n);
  for (int end = n - 1; end > 0; end--) {
    swap(vec[0], vec[end]);
    down_heap(vec, 0, end);
  }
}

// 標準入力などの処理
int main() {
  vector<int> x = {1, 10, 3, 2, 7, 9, 8, 4, 5, 6};
  heap_sort(x);
  for (int i = 0; i < x.size(); i++) {
    cout << x.at(i) << " ";
  }
  return 0;
}