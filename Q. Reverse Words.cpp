#include <iostream>
#include <sstream>
using namespace std;
void reverseWords(string& s) {
    istringstream iss(s);
    ostringstream oss;
    string word;
    while (iss >> word) {
        for (int i = word.length() - 1; i >= 0; --i) {
            oss << word[i];
        }
        oss << " ";
    }
    s = oss.str();
    s.pop_back();
}

int main() {
    string s;
    getline(cin, s);
    reverseWords(s);
    cout << s << endl;
    return 0;
}
