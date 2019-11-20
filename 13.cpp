#include <iostream>            //13
#include <cmath>
using namespace std;

int main(){
	double a , b , c;
	cin >> a >> b >> c;
	double d = cbrt(sqrt(pow(a , 2) + c)) - ((pow(c , 2)*pow(sin(a + b) , 3))/a);
	cout << d;
	return 0;
}
