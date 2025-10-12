#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  queue<int> q;

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string command;
    cin >> command;

    if (command == "push") {
      int data;
      cin >> data;
      q.push(data);
    } else if (command == "pop") {
      if (q.empty()) {
        cout << -1 << '\n';
      } else {
        cout << q.front() << '\n';
        q.pop();         
      }
    } else if (command == "size") {
      cout << q.size() << '\n';
    } else if (command == "empty") {
      cout << q.empty() << '\n'; 
    } else if (command == "front") {
      if (q.empty()) {
        cout << -1 << '\n';
      } else {
        cout << q.front() << '\n';
      }
    } else if (command == "back") {
      if (q.empty()) {
        cout << -1 << '\n';
      } else {
        cout << q.back() << '\n';
      }
    }
  }

  return 0;
}