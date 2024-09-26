#include <iostream>
#include <math.h>

using namespace std;

bool check(int n)
{
	if (n < 2)
	return 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		return 0;
	}
	return 1;
	}
int main(){
int n;
cout << "nhap vao so nguyen duong n : ";
cin >> n; 
for (int i =2; i < n; i++)
{
if (check(i) == true)
cout << i << " ";

}
return 0;
}
