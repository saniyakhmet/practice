#include <iostream>     //2
#include <ctime>
using namespace std;

int main(){
	time_t rawtime;

  	time ( &rawtime );
	cout  << ctime (&rawtime) << endl << "Saniya Akhmet";
	return 0;
}
