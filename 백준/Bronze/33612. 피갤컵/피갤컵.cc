#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  
  int year = 2024;
  int month = 8 + ((n-1)*7);
  
  if(month % 12 == 0){
    year += (month/12) - 1;
    month = 12;
  }else{
    year += month/12;
    month = month % 12;
  }

  cout << year << " " << month << '\n';
  return 0;
}