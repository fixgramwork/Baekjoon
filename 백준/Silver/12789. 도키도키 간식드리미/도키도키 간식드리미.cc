#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  if (!(cin >> n)) return 0;

  stack<int> s;
  int need = 1;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    s.push(x);

    while (!s.empty() && s.top() == need) {
        s.pop();
        ++need;
    }
  }

  if (need == n + 1) cout << "Nice";
  else cout << "Sad";

  return 0;
}