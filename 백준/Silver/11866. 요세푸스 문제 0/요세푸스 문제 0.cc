#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    queue<int> list;
    queue<int> q;
    for(int i = 1; i<=n;i++) q.push(i);
    while(true) {
        if(q.empty()){
            break;
        }
        for(int j = 1; j<=k;j++) {
            if(j==k) list.push(q.front());
            else  q.push(q.front());
            q.pop();
        }
    }
    cout << "<";
    for(int i = 0; i<n;i++) {
        if(i > 0) cout << ", ";
        cout << list.front();
        list.pop();
    }
    cout << ">";
    return 0;
}