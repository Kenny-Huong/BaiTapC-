#include <iostream>
using namespace std;

int main(){
	int chiso;
	float sotiendien;
	cout << "Nhap chi so dien tieu thu : ";
	cin >> chiso;
	if(chiso <= 80){
		cout << "So tien diem ma gia dinh can tra la : " << chiso*350; 
	}
	else {
		cout << "So tien dien ma gia dinh can tra la : " << chiso*900;
	}
return 0;	
}

