#include <iostream>         //21
#include <cmath>
using namespace std;

int main(){
	float a , b;
	cin >> a >> b;
	float c = sqrt(a*a + b*b);
	cout << (a * b)/2 << " " << a + b + c << " " << c;
}
