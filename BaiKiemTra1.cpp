#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float x;
   float y;
   float ketqua;
  bool kt = true;
   char c;
   cout << "Nhap x: ";
   cin >> x;
   cout << "\nDau can tinh toan: ";
   cin >> c;
   cout << "\nNhap y: ";
   cin >> y;
   
   switch (c)
   {
    case '+':
   	ketqua = x + y;
   	break;
   	
   	case '-':
   	ketqua = x - y;
   	break;
   	
   	case '*':
   	ketqua = x * y;
   	break;
   	
   	case '/':
   		if(y == 0){
   			cout << "\nKhong chia duoc !";
   			return 0; 
		}
    ketqua = x / y;
    break;
   }
   
   cout << "---------------------------" << endl; 
   	cout << " x "<< c << " y = "<< ketqua << endl;
  
   return 0;
}
   
