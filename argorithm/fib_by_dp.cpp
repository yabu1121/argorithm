// フィボナッチ数列

#include <bits/stdc++.h>
using namespace std;

long long fib(long long n) {
    long long a[100];
    a[0] = 1;
    a[1] = 1;
    for(long long i = 2; i <= n; i += 1) {
        a[i] = a[i-1] + a[i-2];
    }
    return a[n];
}
 
int main() {
  for(long long i = 0; i < 100; i++){
    printf("%d ",fib(i));
  }
  return 0;
}