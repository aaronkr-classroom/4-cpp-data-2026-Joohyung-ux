#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i, j;
	for (j = 1; j <= 1000; j++) {
		cout << "\t" << j << "\t"<< j * j << endl;
	}
	for (i = 1; i <= 100; i++) {
		cout << setw(10) << i << setw(10) << i * i << endl;
	
	}
	
		return 0;
}