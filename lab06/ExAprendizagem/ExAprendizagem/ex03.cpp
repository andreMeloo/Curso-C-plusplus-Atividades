#include <iostream>

using namespace std;

int main()
{
	unsigned short x = 1;
	unsigned int y = 2'147'483'647;

	x = x + 32767;
	cout << "x = " << x << endl; 
	y = y + 1;
	cout << "y = " << y << endl;
	return 0;
}