#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Gia Phuong Trinh Bac Nhat : ax + b > 0" << endl;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    if(a != 0) {
        if(a > 0) {
            cout << "Phuong trinh co nghiem x >= :" << -b/a; 
        } else {
            cout << "Phuong trinh co nghiem x <= :" << -b/a;
        }
    } else {
        if(b != 0) {
        	cout << "Phuong trinh co vo so nghiem";
		}
        else {
        	cout << "Phuong trinh vo nghiem";
		}  
    }
    return 0;
}
