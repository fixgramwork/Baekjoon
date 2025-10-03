#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxValue = -1;
    int x = 0, y = 0;
    int input = 0;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> input;
            if(input > maxValue){
                maxValue = input;
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << maxValue << "\n" << x << " " << y << "\n";
    return 0;
}