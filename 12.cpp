#include <iostream>            //12
#include <cmath>
using namespace std;

int main(){
	const double e = 2.71;
	double a ;
	cin >> a;
	double b = pow ( e , (a - 2)) + abs(sin(a)) - pow(a , 4)*cos( 1/a);
	cout << b;
	return 0;
}
