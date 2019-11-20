#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b=0;
    for (int i=0; i<3 ; i++){
        cin>> a[i];
    }
    for (int i=0; i<3 ; i++){
        if (a[i]>0){
            b++;
        }
    }
    cout <<b;
}
