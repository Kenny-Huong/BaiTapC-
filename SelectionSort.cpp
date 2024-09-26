#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
	int min;
	for (int i = 0; i < n - 1; i++)
	{
		min = 1;
		for (int j = i + 1; j < n; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
} 

int main()
{
	int a[] = {12, 2, 8, 5, 1, 6, 4, 15};
	int n = sizeof(a)/sizeof(a[0]);
	SelectionSort (a, n);
	cout << "Mang sau khi sap xep " << endl;
	for (int i = 0; i < n; i++)
	{	
		cout << a[i] << " ";
	}
	
	system("pause");
}
