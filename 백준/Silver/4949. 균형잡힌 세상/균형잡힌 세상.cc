#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (true) {
    stack<char> s;
    string str;

    getline(cin, str);
    if (str == ".") break;

    for (const auto &value : str) {
      if(value == '(' || value == '[') s.push(value);
      else {
        if(value == ')') {
          if(s.empty() || s.top() != '(') {
            s.push(value);
            break;
          } else s.pop();
        } else if(value == ']') {
          if(s.empty() || s.top() != '[') {
            s.push(value);
            break;
          } else s.pop();
        }
      }
    }

    if(s.empty()) cout << "yes\n";
    else cout << "no\n";
  }

  return 0;
}