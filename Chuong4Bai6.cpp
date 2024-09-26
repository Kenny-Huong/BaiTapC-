#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    unsigned int a, b, c, dtb;
    
	cout << "Nhap diem toan : "; cin >> a;
	cout << "Nhap diem ly   : "; cin >> b;
	cout << "Nhap diem hoa  : "; cin >> c;
	
	dtb = (a + b + c) / 3;
	cout << "Diem Trung Binh cua hoc sinh la : " <<   setprecision(2)<< fixed << dtb << endl;
	if(dtb >= 9){                                   
		cout << "Xep loai Xuat Sac ";
		}
	else if(8 <= dtb && dtb < 9){
		cout << "Xep loai Gioi";
		}
	else if(6.5 <= dtb  && dtb  < 8){
		cout << "Xep loai kha";
		}
	else if(5 <= dtb  && dtb  < 6.5){
		cout << "Xep loai trung binh";
		}
	else if(dtb  < 5){
		cout << "Xep loai yeu";
		}	
return 0;	
}
