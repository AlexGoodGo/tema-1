//программа работает только на англ языке 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string text;
    getline(cin, text);
    
    vector<string> words;
    string current_word = "";
    
    for (char c : text) {
        if (isalpha(c) || c == '-' || c == '—' || c == '–') {
            current_word += tolower(c);
        } else {
            if (!current_word.empty()) {
                words.push_back(current_word);
                current_word = "";
            }
        }
    }
    
    if (!current_word.empty()) {
        words.push_back(current_word);
    }

    if (!words.empty()) {
        sort(words.begin(), words.end());
        
        cout << words[0] << endl;
        for (size_t i = 1; i < words.size(); i++) {
            if (words[i] != words[i - 1]) {
                cout << words[i] << endl;
            }
        }
    }
    
    return 0;
}
