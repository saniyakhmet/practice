#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if (a==11){
        switch(b){
            case 0:
            cout <<"North";
            case 1:
            cout << "West";
            case -1:
            cout << "East";
        }
    }
    if (a==12){
        switch(b){
            case 0:
            cout <<"West";
            case 1:
            cout << "South";
            case -1:
            cout << "North";
        }
    }
    if (a==13){
        switch(b){
            case 0:
            cout <<"South";
            case 1:
            cout << "East";
            case -1:
            cout << "West";
        }
    }
    if (a==14){
        switch(b){
            case 0:
            cout <<"East";
            case 1:
            cout << "North";
            case -1:
            cout << "South";
        }
    }
}
