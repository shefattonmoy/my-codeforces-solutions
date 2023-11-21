#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    size_t found = s.find("EGYPT");
    while (found != string::npos)
    {
        s.replace(found, 5, " ");
        found = s.find("EGYPT");
    }
    cout << s << endl;
    return 0;
}
