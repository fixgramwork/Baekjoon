#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;
vector<int> temp;
vector<bool> visited;

void dfs(int depth) {
    if (depth == m) {
        for (int x : temp) cout << x << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue; // 이미 사용된 숫자는 패스
        visited[i] = true;
        temp.push_back(a[i]);
        dfs(depth + 1);
        temp.pop_back();
        visited[i] = false;
    }
}

int main() {
    cin >> n >> m;
    a.resize(n);
    visited.resize(n, false);

    for (int i = 0; i < n; i++) a[i] = i + 1;

    dfs(0);
}