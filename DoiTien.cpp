#include <iostream>
#include <math.h>
using namespace std;

void DoiTien (int sotien)
{
	int   MenhGia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int SoMenhGia[9] = {0};
	
	int i = 0;
	while (i < 9)
	{
		if (sotien > MenhGia[i])
		{
			break;
		}
		i++;
	}
	
	while (i < 9 && sotien > 0)
	{
		SoMenhGia[i] = sotien / MenhGia[i];
		sotien = sotien % MenhGia[i];
		
		i++;
	 }
	 
	cout << "So tien doi duoc la : ";
	for (int j = 0; j < 9; j++)
	{
		if (SoMenhGia[i] > 0)
		{
			cout << SoMenhGia[j] << " to " << MenhGia[j]; 
		}
	 } 
 } 
 
int main()
{
	int n;
	cout << "Nhap so tien can doi : "; cin >> n;
	DoiTien(n);
	
}
	 
 
 
 
 
 
 
 
 
