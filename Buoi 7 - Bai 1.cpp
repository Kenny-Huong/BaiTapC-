#include <iostream>
using namespace std;

template<class T>
T MAX(T a, T b, T c)
{
	T max = a;
	if(b > a) max = b;
	if(c > max) max = c;
	return max; 
}

int main()
{
	int a = 8, b = 9, c = 2003;
	cout << "\nSo nguyen lon nhat la : " << MAX(a, b, c);
	float x = 0.8, y = 0.9, z = 20.03;
	cout << "\nSo thuc lon nhat la : " << MAX(x, y, z);
	char m = 'N', n = 'V', p = 'H';
	cout << "\nKy tu lon nhat la : " << MAX(m, n, p) << endl;
}