#include <bits/stdc++.h>            //28(1)
using namespace std;
int main()
{
    double a,b;
    double c;
    cin >> a >> b;
    c=b/100;
    for (int i = 0; i<5; i++){
        a*=(1+c);
    }
    cout <<a;
}


#include <bits/stdc++.h>          //28(2)
using namespace std;
int main()
{
    double a,b,d;
    double c;
    cin >> a >> b;
    c=b/100;
    d=a*c;
    for(int i = 0; i<5 ; i++){
        a+=d;
    }
    cout <<a;
}
