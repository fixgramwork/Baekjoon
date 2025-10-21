#include <bits/stdc++.h>
using namespace std;
int N, M;
string s;
string a[1000000];

map<int, string> mp;
map<string, int> mp2;

int main() {
  ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

  cin >> N >> M;
  for(int i=0;i<N;i++) {
    cin >> s;
    mp2[s] = i + 1;
    mp[i+1] = s;
    a[i+1] = s;
  }

  for(int i=0;i<M;i++) {
    cin >> s;
    if(atoi(s.c_str()) == 0){
      cout << mp2[s] << '\n';
    }else{
      cout << a[atoi(s.c_str())] << "\n";
    }
  }
  return 0;
}