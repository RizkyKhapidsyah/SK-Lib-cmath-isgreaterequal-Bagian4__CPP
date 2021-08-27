
#include <iostream>
#include <conio.h>
#include <cmath>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	
	bool hasil;
	float a = 80.23;
	int b = 82;

	hasil = isgreaterequal(a, b);
	cout << a << " isgreaterequal to " << b << ": " << hasil << endl;

	char x = 'b';

	hasil = isgreaterequal(x, a);
	cout << x << " isgreaterequal to " << a << ": " << hasil;

	_getch();
	return 0;
}
