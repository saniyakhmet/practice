#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a/1000==a%10&&(a%1000)/100==(a%100)/10)cout << "Yes";
    else cout <<"no";
}
