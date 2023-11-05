#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string ch;
    int n;
    int x=0;
    cin >> n;
    while(n--){
        cin>>ch;
        if(ch[0]=='+' || ch[1]=='+'){
            x++;
        }
        else
            x--;
    }
    cout<< x <<endl;

    return 0;
}
