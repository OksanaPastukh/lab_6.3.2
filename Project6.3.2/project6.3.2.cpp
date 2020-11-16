//Lab_6.3.2
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Random(int* p, int n, int Low, int High, int i)
{
	p[i] = rand() % (High - Low + 1) + Low;
	if (i < n - 1)
		Random(p, n, Low, High, i + 1);
}
void Print(int* p, int n, int i)
{
	cout << setw(3) << p[i] << " ";
	if (i < n - 1)
		Print(p, n, i + 1);
	else
		cout << endl;
}
int Count(int* p, int n, int i)
{
	if (i < n)
	{
		return ((p[i] < 0) ? 1 : 0) + Count(p, n, i + 1);
	}
	else
		return 0;
}
// 2 cпосіб використовуючи шаблони функції

template <typename T>
void Random_1(T* p, int n, T Low, T High, int i)
{
	p[i] = rand() % (High - Low + 1) + Low;
	if (i < n - 1)
		Random_1(p, n, Low, High, i + 1);
}
template <typename T>
void Print_1(T* p, int n, int i)
{
	cout << setw(3) << p[i] << " ";
	if (i < n - 1)
		Print_1(p, n, i + 1);
	else
		cout << endl;
}
template <typename T>
int Count_1(T* p, int n, int i )
{
	if (i < n)
	{
		return ((p[i] < 0) ? 1 : 0) + Count_1(p, n, i + 1);
	}
	else
		return 0;
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int p[n];
	int Low;
	int High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;
	Random(p, n, Low, High,0);
	Print(p, n,0);
	cout << "Count = " << Count(p, n,0) << endl;
	Random_1(p, n, Low, High,0);
	Print_1(p, n,0);
	cout << "Count 2 = " << Count_1(p, n,0) << endl;
	return 0;
}