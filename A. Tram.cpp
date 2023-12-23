#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int capacity = 0;
    int currentPassengers = 0;

    for(int i=0; i<n; i++)
    {
        int exitPassengers, enterPassengers;
        cin>>exitPassengers>>enterPassengers;

        currentPassengers = currentPassengers - exitPassengers + enterPassengers;
        capacity = max(capacity, currentPassengers);
    }

    cout<<capacity<<endl;

    return 0;
}
