#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
  int temp;
  temp = x;
  x = y; 
  y = temp;
}

int main(){
  int x = 2; 
  int y = 5;
  cout << x << " " << y << endl;
  swap(x, y);
  cout << x << " " << y << endl;
}