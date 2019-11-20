#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int d,f,g;
    cin >> d >> f >> g;
    if (c>0&&g>0&&b>0&&f>0&&b<=12&&f<=12&&a>0&&d>0&&a<=31&&d<=31){
    if (c<g){
        cout << "Yes";
    }else if (c==g){
        if (b<f){cout << "Yes";}
        else if (b==f){if (a<d){cout <<"Yes";}
        else cout <<"no";}else cout <<"no";
    }else  cout << "no";
    }
}
