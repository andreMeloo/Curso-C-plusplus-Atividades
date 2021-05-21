#include <iostream>
#include <Windows.h>
#include <assert.h>
#include <cmath>

using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	
	int nums[19] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int total = 1;

	for (int i = 0; i < 19; i++)
	{
		if (nums[i] != 1 && nums[i] % 2 == 0)
		{
			for (int y = i; y < 19; y++)
			{
				if (nums[y] % 2 == 0)
				{
					nums[y] /= 2;
				}
			}
			total *= 2;
			i = 0;
		}
		else
		{
			for (int w = 3; w <= nums[i]; w++)
			{
				if (nums[i] != 1 && nums[i] % w == 0)
				{
					for (int t = i; t < 19; t++)
					{
						if (nums[t] % w == 0)
						{
							nums[t] /= w;
						}
					}
					total *= w;
					i = 0;
				}
			}
		}
	}
	
	cout << "O MMC de 1 a 20 é : " << total;
}