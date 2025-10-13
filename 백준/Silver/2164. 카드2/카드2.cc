#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  queue<int> q;
  for(int i =1;i<=N;i++) q.push(i);
  
  while(true){
    if(q.size() == 1) break;
    else{
      q.pop();
      q.push(q.front());
      q.pop();
    }
}

  cout << q.front();
  
  return 0;
}