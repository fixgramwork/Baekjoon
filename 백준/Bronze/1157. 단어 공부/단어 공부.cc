#include <iostream>
using namespace std;

int frequency_count[26] = {0};

int main() {
    string str;
    cin >> str;

    for (char c : str) { 
        if (c >= 'A' && c <= 'Z') {
            frequency_count[c - 'A']++; 
        } else if (c >= 'a' && c <= 'z') {
            frequency_count[c - 'a']++;
        }
    }

    int max_freq = 0;
    int max_index = -1;
    bool is_duplicate = false;

    for (int i = 0; i < 26; i++) {
        if (frequency_count[i] > max_freq) {
            max_freq = frequency_count[i];
            max_index = i;
            is_duplicate = false; 
        } else if (frequency_count[i] == max_freq && max_freq > 0) {
            is_duplicate = true; 
        }
    }

    if (is_duplicate) {
        cout << "?";
    } else {
        cout << (char)('A' + max_index);
    }

    return 0;
}