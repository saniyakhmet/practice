#include <iostream>
using namespace std;
int main () {
    int n, k = 0;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0)
            k++;
        n = n / 10;
    }
    cout << k;
    return 0;
}
