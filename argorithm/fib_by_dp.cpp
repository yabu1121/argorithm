// フィボナッチ数列

#include <bits/stdc++.h>
using namespace std;

long long fib(long long n) {
  vector<long long> a(100);
  a.at(0) = 1;
  a.at(1) = 1;
  for(long long i = 2; i <= n; i += 1) {
    a.at(i) = a.at(i-1) + a.at(i-2);
  }
  return a[n];
}
 
int main() {
  for(long long i = 0; i < 100; i++){
    printf("%d ",fib(i));
  }
  return 0;
}