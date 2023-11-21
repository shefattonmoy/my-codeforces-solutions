#include <iostream>
using namespace std;
void calculateResults(int X, int Y)
{
    long long summation = X + Y;
    long long multiplication = static_cast<long long>(X) * Y;
    int subtraction = X - Y;

    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;
}

int main()
{
    int X, Y;
    cin >> X >> Y;
    calculateResults(X, Y);

    return 0;
}
