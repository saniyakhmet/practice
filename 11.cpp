#include <iostream>           //11
#include <cmath>
using namespace std;

int main(){
	double a;
	cin >> a;
	double b = (abs(a - 5) - sin(a))/3;
	double c = sqrt(pow(a , 2) + 2014)*cos(2*a -3);
	cout << b + c;
	return 0;
}
