#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k, temp, ret = -100001, a[100000];
int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
  cin >> n >> k;
  for(int i = 1; i<=n;i++){
    cin >> temp; a[i] = a[i-1] + temp;
  }

  for(int i = k; i<=n;i++) ret = max(ret, a[i] - a[i-k]);
  cout << ret << "\n";
}