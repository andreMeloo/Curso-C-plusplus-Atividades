#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string data1, data2, data3, minhaData = "Natal";
	cout << "Digite suas datas comemorativas preferidas: " << endl;
	cin >> data1;
	cin >> data2;
	cin >> data3;
	cout << data1 << ", " << data2 << ", " << data3 << " s�o otimas datas comemorativas!" << endl;
	if (data1 == minhaData)
	{
		cout << "O " << minhaData << "tamb�m � minha data preferida!";
	}
	else if (data2 == minhaData)
	{
		cout << "O " << minhaData << "tamb�m � minha data preferida!";
	}
	else if (data3 == minhaData)
	{
		cout << "O " << minhaData << " tamb�m � minha data preferida!";
	}
}