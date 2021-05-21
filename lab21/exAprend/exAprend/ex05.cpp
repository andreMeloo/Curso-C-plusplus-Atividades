#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num = 2, numDivisores = 0, count = 1;
	

	while (count <= 10001)
	{
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				numDivisores++;
			}
		}
		if (numDivisores <= 2)
		{
			cout << count << "° - " << num << endl;
			count++;
		}
		num++;
		numDivisores = 0;
	}
		
	

}