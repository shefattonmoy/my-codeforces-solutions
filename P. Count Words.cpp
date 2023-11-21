#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

bool isWordCharacter(char c) {
    return isalnum(c) || c == '\'';
}

int countWords(const string& s) {
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isWordCharacter(c)) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);
    int countNumbers = countWords(s);
    cout << countNumbers << endl;
    return 0;
}
