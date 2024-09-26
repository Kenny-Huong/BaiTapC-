#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
    cout << "Nhap vao 4 so a, b, c, d : \n";
	 cin >> a >> b >> c >> d; 	
	int max = (a > b) ? a : b;
	    max = (max > c) ? max : c;
	    max = (max > d) ? max : d;
	
	if( a == b && b == c && c == d ){
		cout << "Khong co gia tri lon nhat";	
	}
	else {
	cout << "Gia tri lon nhat trong 4 so la :  " << max;
		
	}    	
return 0;	
}
