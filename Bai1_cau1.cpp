#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int a[50], n;
	cout << "Vui long nhap so luog phan tu" << endl;
	cin >> n;
	srand(time(NULL));
	int tmp = rand() % (50 - 15 + 1) + 15;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (50 - 15 + 1) + 15;

	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;

	}
	
	system("pause");
}