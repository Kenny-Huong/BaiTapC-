#include <iostream>
using namespace std;

int main(){
	int a, b, c, max, min;
	cout << "Nhap so a: ";
	cin >> a;
	cout << "Nhao so b: ";
	cin >> b;
	cout << "Nhao so c: ";
	cin >> c;
	max = a;
	if (max < b){
	    max = b;
    }
	if (max < c){
	    max = c;
	}
	min = a;
	if (min > b){
		min =b;
	}
	if (min > c){
		min = c;
	}
	cout << "So lon nhat trong ba so la " << max << endl;
	cout << "So nho nhat trong ba so la " << min;
return 0;	  
}
