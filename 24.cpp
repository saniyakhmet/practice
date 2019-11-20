#include <iostream>          //24
using namespace std;

int main(){

	int a , b , c , d;
	cin >> a >> b >> c;
	d = c;
	b = c / 100 + 1.0;

	for (int i = 0; i < a; i++){
		c = (c + 3)* b; }
	cout << c - d;
	return 0;
}
